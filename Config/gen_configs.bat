@ set WORKSPACE=..

@ set GEN_CLIENT=%WORKSPACE%\Tools\Luban.ClientServer\Luban.ClientServer.exe
@ set CONF_ROOT=%WORKSPACE%\Config

@echo 正在生成客户端配置
@ %GEN_CLIENT% -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_data_dir %WORKSPACE%\Client\Assets\Bundles\Configbin\Datas ^
 --gen_types data_bin ^
 -s client 

@ %GEN_CLIENT% --template_search_path CustomTemplate -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_code_dir %WORKSPACE%\Client\Assets\_MainProject\Hotfix\Generate\Configs ^
 --output_data_dir %WORKSPACE%\Client\Assets\Bundles\Configbin\Indexes ^
 --gen_types code_cs_unity_bin,data_bidx ^
 -s client

@ %GEN_CLIENT% -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_data_dir %CONF_ROOT%\Json\Client ^
 --gen_types data_json ^
 -s client
 
@echo 正在生成服务端配置
@ %GEN_CLIENT% -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_data_dir %WORKSPACE%\Server\Configbin\Datas ^
 --gen_types data_bin ^
 -s server 

@ %GEN_CLIENT% --template_search_path CustomTemplate -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_code_dir %WORKSPACE%\Server\GameServer\src\Generate\Config ^
 --output_data_dir %WORKSPACE%\Server\Configbin\Indexes ^
 --gen_types code_cs_unity_bin,data_bidx ^
 -s server

@ %GEN_CLIENT% -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_data_dir %CONF_ROOT%\Json\Server ^
 --gen_types data_json ^
 -s server

 pause