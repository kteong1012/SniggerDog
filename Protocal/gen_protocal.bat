set WORKPLACE=.
set TEMPLATE_PATH=%WORKPLACE%\Common\Template\protocal_template.txt

%WORKPLACE%\CSProtocals\bin\Debug\net6.0\CSProtocals.exe ^
--temp %TEMPLATE_PATH% ^
--out %WORKPLACE%\..\Client\Assets\Shares\Protocal\Defines\CSProtocals.cs ^
--type cs ^
--start 1000000
echo Gen CSProtocals success!!!

%WORKPLACE%\SSProtocals\bin\Debug\net6.0\SSProtocals.exe ^
--temp %TEMPLATE_PATH% ^
--out %WORKPLACE%\..\Client\Assets\Shares\Protocal\Defines\SSProtocals.cs ^
--type ss ^
--start 2000000
echo Gen SSProtocals success!!!

pause