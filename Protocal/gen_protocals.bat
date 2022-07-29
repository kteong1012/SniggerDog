set WORKSPACE=..

set GEN_CLIENT=dotnet %WORKSPACE%\Tools\Luban\Luban.ClientServer\Luban.ClientServer.dll
set CONF_ROOT=%WORKSPACE%\Protocal

%GEN_CLIENT% --template_search_path CustomTemplate -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_code_dir %WORKSPACE%\Client\Assets\Hotfix\AutoGenerate\Protocals ^
 --output_data_dir %WORKSPACE%\Client\Assets\Bundles\Configbin\Indexes ^
 --gen_types code_cs_unity_bin,data_bin ^
 -s all

pause