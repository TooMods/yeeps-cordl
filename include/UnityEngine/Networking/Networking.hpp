#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/Networking/CertificateHandler.hpp"
#include "UnityEngine/Networking/DownloadHandler.hpp"
#include "UnityEngine/Networking/DownloadHandlerBuffer.hpp"
#include "UnityEngine/Networking/IMultipartFormSection.hpp"
#include "UnityEngine/Networking/MultipartFormFileSection.hpp"
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "UnityEngine/Networking/UnityWebRequestAsyncOperation.hpp"
#include "UnityEngine/Networking/UploadHandler.hpp"
#include "UnityEngine/Networking/UploadHandlerRaw.hpp"
#ifdef __cpp_modules
export module Networking;
#endif
