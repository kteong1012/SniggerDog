@ set WORKSPACE=..

@ set GEN_CLIENT=D:\WorkPlace\Projects\luban_fork\src\Luban.Client\bin\Debug\net6.0\Luban.Client.exe
@ set CONF_ROOT=%WORKSPACE%\Config

@ %GEN_CLIENT% -h -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Datas ^
 --output_code_dir %WORKSPACE%\Test\1 ^
 --output_data_dir %WORKSPACE%\Test\2 ^
 --gen_types code_cs_unity_json,data_json ^
 -s all

 pause