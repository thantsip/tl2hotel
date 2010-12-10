@echo off
@echo [Running Tests Started]

pushd = "%cd%"

cd "%~dp0"
for /d %%D in ("..\tests\*") do (
  cd "%%D\debug"

  testing

  if exist "*.s3db" erase /F /Q "*.s3db"
  if exist "*.txt"  erase /F /Q "*.txt"

  cd "%~dp0"
)

popd

@echo [Running Tests Finished]
@echo on