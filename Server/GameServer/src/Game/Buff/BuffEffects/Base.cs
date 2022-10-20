using CodingSeb.ExpressionEvaluator;
using Leopotam.EcsLite;
using PostMainland;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Cfg.MetaBuffEffect
{
    public partial class Base
    {
        private enum ValueCase
        {
            C_,
            T_
        }
        public abstract void Activate(EcsWorld world, int casterEntity, int targetEntity);
        private string ParseForlmula(EcsWorld world, int casterEntity, int targetEntity, string rawFormula)
        {
            Regex rule = new Regex(@"(?i)(?<=【)([\w\d]+)(?=】)");
            string result = rawFormula;
            foreach (Match match in rule.Matches(rawFormula))
            {
                float value;
                if (match.Value.StartsWith(ValueCase.C_.ToString()))
                {
                    value = GetNumericValue(match.Value, world, ValueCase.C_, casterEntity);
                }
                else if (match.Value.StartsWith(ValueCase.T_.ToString()))
                {
                    value = GetNumericValue(match.Value, world, ValueCase.T_, targetEntity);
                }
                else
                {
                    Log.Error($"解析'{match.Value}'异常,不符合规则");
                    return null;
                }

                result = result.Replace($"【{match.Value}】", value.ToString());
            }
            return result;
        }
        protected float GetFormulaValue(EcsWorld world, int casterEntity, int targetEntity, string rawFormula)
        {
            var evaluator = new ExpressionEvaluator();
            var expression = ParseForlmula(world, casterEntity, targetEntity, rawFormula);
            return float.Parse(evaluator.Evaluate(expression).ToString());
        }
        private float GetNumericValue(string str, EcsWorld world, ValueCase valueCase, int entity)
        {
            string numericStr = str.Substring(valueCase.ToString().Length);
            if (Enum.TryParse<Numeric>(numericStr, out var numericId))
            {
                ref var casterNumeric = ref world.Get<NumericComponent>(entity);
                float value = casterNumeric[numericId].Value;
                return value;
            }
            else
            {
                Log.Error($"解析'{str}'异常,{numericStr}不是有效的Numeric枚举");
                return 0;
            }
        }
    }
}
