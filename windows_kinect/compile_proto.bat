%1\packages\Grpc.Tools.0.15.0\tools\windows_x86\protoc -I %1\protos --csharp_out %1 --grpc_out %1 %1\protos\%2 --plugin=protoc-gen-grpc=%1\packages\Grpc.Tools.0.15.0\tools\windows_x86\grpc_csharp_plugin.exe