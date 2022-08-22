set WORKPLACE=.
set START=%WORKPLACE%\ProtocalGenerateJob\bin\Debug\net6.0\ProtocalGenerateJob.exe
set TEMPLATE_PATH=%WORKPLACE%\ProtocalGenerateJob\Template\protocal_template.txt

pause

echo =================

%START% --temp %TEMPLATE_PATH% --out %WORKPLACE%\..\Client\Assets\Shares\Protocal\Defines\CSProtocals.cs --type cs --start 1000000

%START% --temp %TEMPLATE_PATH% --out %WORKPLACE%\..\Client\Assets\Shares\Protocal\Defines\SSProtocals.cs --type ss --start 2000000

echo ===============================
echo %~f0
echo %WORKPLACE%
echo %START%
echo %Template%
echo ===============================
echo success!!!

pause