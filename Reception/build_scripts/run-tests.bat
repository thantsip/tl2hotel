@echo off
@echo [Running Tests Started]

pushd = "%cd%"

cd "%~dp0"
for /d %%D in ("..\tests\*") do (
  "%%D\debug\testing.exe"
)

popd

@echo [Running Tests Finished]
@echo on