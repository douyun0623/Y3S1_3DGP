﻿// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
// Windows 헤더 파일
#include <windows.h>
// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
// Direct3D와 관련있는 헤더
#include <string>
#include <wrl.h>
#include <shellapi.h>

#include <d3d12.h>	// Direct3D 12 API 함수 사용을 위한 필수 헤더
#include <dxgi1_4.h>

#include <D3Dcompiler.h>

#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <DirectXColors.h>
#include <DirectXCollision.h>

#include <DXGIDebug.h>

using namespace DirectX;
using namespace DirectX::PackedVector;

using Microsoft::WRL::ComPtr;

// 임포트(Import) 라이브러리를 링커 속성에서 입력하지 않아도 되도록
#pragma comment(lib, "d3dcompiler.lib") // Direct3D 셰이더 컴파일러 라이브러리
#pragma comment(lib, "d3d12.lib")       // Direct3D 12 라이브러리
#pragma comment(lib, "dxgi.lib")        // DirectX Graphics Interface 라이브러리

#pragma comment(lib, "dxguid.lib")      // DirectX 관련 GUID를 포함한 라이브러리

// 클라이언트 영역의 크기 또는 후면 버퍼의 크기를 나타내는 상수
#define FRAME_BUFFER_WIDTH 800
#define FRAME_BUFFER_HEIGHT 600
