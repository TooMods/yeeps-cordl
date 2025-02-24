#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequest)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::Networking {
class DownloadHandler;
}
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UploadHandler;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__Result;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__UnityWebRequestError;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__UnityWebRequestMethod;
}
// Forward declare root types
namespace UnityEngine::Networking {
struct __UnityWebRequest__Result;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__UnityWebRequestError;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__UnityWebRequestMethod;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Networking::__UnityWebRequest__Result);
MARK_VAL_T(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError);
MARK_VAL_T(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod);
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequest);
// Type: ::UnityWebRequestMethod
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: true
// CS Name: ::UnityWebRequest::UnityWebRequestMethod
struct CORDL_TYPE __UnityWebRequest__UnityWebRequestMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UnityWebRequest__UnityWebRequestMethod_Unwrapped
  enum struct ____UnityWebRequest__UnityWebRequestMethod_Unwrapped : int32_t {
    __E_Get = static_cast<int32_t>(0x0),
    __E_Post = static_cast<int32_t>(0x1),
    __E_Put = static_cast<int32_t>(0x2),
    __E_Head = static_cast<int32_t>(0x3),
    __E_Custom = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnityWebRequest__UnityWebRequestMethod_Unwrapped() const noexcept {
    return static_cast<____UnityWebRequest__UnityWebRequestMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityWebRequest__UnityWebRequestMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UnityWebRequest__UnityWebRequestMethod(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Custom value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod const Custom;

  /// @brief Field Get value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod const Get;

  /// @brief Field Head value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod const Head;

  /// @brief Field Post value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod const Post;

  /// @brief Field Put value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod const Put;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Networking
// Type: ::UnityWebRequestError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: true
// CS Name: ::UnityWebRequest::UnityWebRequestError
struct CORDL_TYPE __UnityWebRequest__UnityWebRequestError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UnityWebRequest__UnityWebRequestError_Unwrapped
  enum struct ____UnityWebRequest__UnityWebRequestError_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Unknown = static_cast<int32_t>(0x1),
    __E_SDKError = static_cast<int32_t>(0x2),
    __E_UnsupportedProtocol = static_cast<int32_t>(0x3),
    __E_MalformattedUrl = static_cast<int32_t>(0x4),
    __E_CannotResolveProxy = static_cast<int32_t>(0x5),
    __E_CannotResolveHost = static_cast<int32_t>(0x6),
    __E_CannotConnectToHost = static_cast<int32_t>(0x7),
    __E_AccessDenied = static_cast<int32_t>(0x8),
    __E_GenericHttpError = static_cast<int32_t>(0x9),
    __E_WriteError = static_cast<int32_t>(0xa),
    __E_ReadError = static_cast<int32_t>(0xb),
    __E_OutOfMemory = static_cast<int32_t>(0xc),
    __E_Timeout = static_cast<int32_t>(0xd),
    __E_HTTPPostError = static_cast<int32_t>(0xe),
    __E_SSLCannotConnect = static_cast<int32_t>(0xf),
    __E_Aborted = static_cast<int32_t>(0x10),
    __E_TooManyRedirects = static_cast<int32_t>(0x11),
    __E_ReceivedNoData = static_cast<int32_t>(0x12),
    __E_SSLNotSupported = static_cast<int32_t>(0x13),
    __E_FailedToSendData = static_cast<int32_t>(0x14),
    __E_FailedToReceiveData = static_cast<int32_t>(0x15),
    __E_SSLCertificateError = static_cast<int32_t>(0x16),
    __E_SSLCipherNotAvailable = static_cast<int32_t>(0x17),
    __E_SSLCACertError = static_cast<int32_t>(0x18),
    __E_UnrecognizedContentEncoding = static_cast<int32_t>(0x19),
    __E_LoginFailed = static_cast<int32_t>(0x1a),
    __E_SSLShutdownFailed = static_cast<int32_t>(0x1b),
    __E_NoInternetConnection = static_cast<int32_t>(0x1c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnityWebRequest__UnityWebRequestError_Unwrapped() const noexcept {
    return static_cast<____UnityWebRequest__UnityWebRequestError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityWebRequest__UnityWebRequestError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UnityWebRequest__UnityWebRequestError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Aborted value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const Aborted;

  /// @brief Field AccessDenied value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const AccessDenied;

  /// @brief Field CannotConnectToHost value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const CannotConnectToHost;

  /// @brief Field CannotResolveHost value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const CannotResolveHost;

  /// @brief Field CannotResolveProxy value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const CannotResolveProxy;

  /// @brief Field FailedToReceiveData value: static_cast<int32_t>(0x15)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const FailedToReceiveData;

  /// @brief Field FailedToSendData value: static_cast<int32_t>(0x14)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const FailedToSendData;

  /// @brief Field GenericHttpError value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const GenericHttpError;

  /// @brief Field HTTPPostError value: static_cast<int32_t>(0xe)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const HTTPPostError;

  /// @brief Field LoginFailed value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const LoginFailed;

  /// @brief Field MalformattedUrl value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const MalformattedUrl;

  /// @brief Field NoInternetConnection value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const NoInternetConnection;

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const OK;

  /// @brief Field OutOfMemory value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const OutOfMemory;

  /// @brief Field ReadError value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const ReadError;

  /// @brief Field ReceivedNoData value: static_cast<int32_t>(0x12)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const ReceivedNoData;

  /// @brief Field SDKError value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const SDKError;

  /// @brief Field SSLCACertError value: static_cast<int32_t>(0x18)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const SSLCACertError;

  /// @brief Field SSLCannotConnect value: static_cast<int32_t>(0xf)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const SSLCannotConnect;

  /// @brief Field SSLCertificateError value: static_cast<int32_t>(0x16)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const SSLCertificateError;

  /// @brief Field SSLCipherNotAvailable value: static_cast<int32_t>(0x17)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const SSLCipherNotAvailable;

  /// @brief Field SSLNotSupported value: static_cast<int32_t>(0x13)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const SSLNotSupported;

  /// @brief Field SSLShutdownFailed value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const SSLShutdownFailed;

  /// @brief Field Timeout value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const Timeout;

  /// @brief Field TooManyRedirects value: static_cast<int32_t>(0x11)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const TooManyRedirects;

  /// @brief Field Unknown value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const Unknown;

  /// @brief Field UnrecognizedContentEncoding value: static_cast<int32_t>(0x19)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const UnrecognizedContentEncoding;

  /// @brief Field UnsupportedProtocol value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const UnsupportedProtocol;

  /// @brief Field WriteError value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError const WriteError;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Networking
// Type: ::Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: true
// CS Name: ::UnityWebRequest::Result
struct CORDL_TYPE __UnityWebRequest__Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UnityWebRequest__Result_Unwrapped
  enum struct ____UnityWebRequest__Result_Unwrapped : int32_t {
    __E_InProgress = static_cast<int32_t>(0x0),
    __E_Success = static_cast<int32_t>(0x1),
    __E_ConnectionError = static_cast<int32_t>(0x2),
    __E_ProtocolError = static_cast<int32_t>(0x3),
    __E_DataProcessingError = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnityWebRequest__Result_Unwrapped() const noexcept {
    return static_cast<____UnityWebRequest__Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityWebRequest__Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UnityWebRequest__Result(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ConnectionError value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Networking::__UnityWebRequest__Result const ConnectionError;

  /// @brief Field DataProcessingError value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Networking::__UnityWebRequest__Result const DataProcessingError;

  /// @brief Field InProgress value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Networking::__UnityWebRequest__Result const InProgress;

  /// @brief Field ProtocolError value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Networking::__UnityWebRequest__Result const ProtocolError;

  /// @brief Field Success value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Networking::__UnityWebRequest__Result const Success;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::__UnityWebRequest__Result, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::__UnityWebRequest__Result, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Networking
// Type: UnityEngine.Networking::UnityWebRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 59, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::UnityWebRequest*
class CORDL_TYPE UnityWebRequest : public ::System::Object {
public:
  // Declarations
  using Result = ::UnityEngine::Networking::__UnityWebRequest__Result;

  using UnityWebRequestError = ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError;

  using UnityWebRequestMethod = ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod;

  /// @brief Field <disposeCertificateHandlerOnDispose>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField,
                      put = __cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField)) bool _disposeCertificateHandlerOnDispose_k__BackingField;

  /// @brief Field <disposeDownloadHandlerOnDispose>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField,
                      put = __cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField)) bool _disposeDownloadHandlerOnDispose_k__BackingField;

  /// @brief Field <disposeUploadHandlerOnDispose>k__BackingField, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField,
                      put = __cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField)) bool _disposeUploadHandlerOnDispose_k__BackingField;

  __declspec(property(get = get_certificateHandler))::UnityEngine::Networking::CertificateHandler* certificateHandler;

  __declspec(property(get = get_disposeCertificateHandlerOnDispose, put = set_disposeCertificateHandlerOnDispose)) bool disposeCertificateHandlerOnDispose;

  __declspec(property(get = get_disposeDownloadHandlerOnDispose, put = set_disposeDownloadHandlerOnDispose)) bool disposeDownloadHandlerOnDispose;

  __declspec(property(get = get_disposeUploadHandlerOnDispose, put = set_disposeUploadHandlerOnDispose)) bool disposeUploadHandlerOnDispose;

  __declspec(property(get = get_downloadHandler, put = set_downloadHandler))::UnityEngine::Networking::DownloadHandler* downloadHandler;

  __declspec(property(get = get_error))::StringW error;

  __declspec(property(get = get_isModifiable)) bool isModifiable;

  /// @brief Field m_CertificateHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CertificateHandler, put = __cordl_internal_set_m_CertificateHandler))::UnityEngine::Networking::CertificateHandler* m_CertificateHandler;

  /// @brief Field m_DownloadHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DownloadHandler, put = __cordl_internal_set_m_DownloadHandler))::UnityEngine::Networking::DownloadHandler* m_DownloadHandler;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  /// @brief Field m_UploadHandler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UploadHandler, put = __cordl_internal_set_m_UploadHandler))::UnityEngine::Networking::UploadHandler* m_UploadHandler;

  /// @brief Field m_Uri, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Uri, put = __cordl_internal_set_m_Uri))::System::Uri* m_Uri;

  __declspec(property(put = set_method))::StringW method;

  __declspec(property(get = get_responseCode)) int64_t responseCode;

  __declspec(property(get = get_result))::UnityEngine::Networking::__UnityWebRequest__Result result;

  __declspec(property(put = set_timeout)) int32_t timeout;

  __declspec(property(get = get_uploadHandler, put = set_uploadHandler))::UnityEngine::Networking::UploadHandler* uploadHandler;

  __declspec(property(get = get_url, put = set_url))::StringW url;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Abort, addr 0x30a7944, size 0x3c, virtual false, abstract: false, final false
  inline void Abort();

  /// @brief Method BeginWebRequest, addr 0x30a80f0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* BeginWebRequest();

  /// @brief Method Create, addr 0x30a7824, size 0x28, virtual false, abstract: false, final false
  static inline void* Create();

  /// @brief Method Dispose, addr 0x30a7fdc, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeHandlers, addr 0x30a7f7c, size 0x60, virtual false, abstract: false, final false
  inline void DisposeHandlers();

  /// @brief Method EscapeURL, addr 0x30a8fbc, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW EscapeURL(::StringW s);

  /// @brief Method EscapeURL, addr 0x30a8fdc, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW EscapeURL(::StringW s, ::System::Text::Encoding* e);

  /// @brief Method Finalize, addr 0x30a7ee0, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GenerateBoundary, addr 0x30a9880, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateBoundary();

  /// @brief Method Get, addr 0x30a8ec8, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* Get(::StringW uri);

  /// @brief Method GetError, addr 0x30a8450, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError GetError();

  /// @brief Method GetHTTPStatusString, addr 0x30a77ac, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetHTTPStatusString(int64_t responseCode);

  /// @brief Method GetResponseHeader, addr 0x30a8a50, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetResponseHeader(::StringW name);

  /// @brief Method GetResponseHeaderKeys, addr 0x30a8a94, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetResponseHeaderKeys();

  /// @brief Method GetResponseHeaders, addr 0x30a8ad0, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetResponseHeaders();

  /// @brief Method GetUrl, addr 0x30a86e4, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetUrl();

  /// @brief Method GetWebErrorString, addr 0x30a7770, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetWebErrorString(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError err);

  /// @brief Method InternalDestroy, addr 0x30a7888, size 0xbc, virtual false, abstract: false, final false
  inline void InternalDestroy();

  /// @brief Method InternalSetCustomMethod, addr 0x30a8344, size 0x10c, virtual false, abstract: false, final false
  inline void InternalSetCustomMethod(::StringW customMethodName);

  /// @brief Method InternalSetDefaults, addr 0x30a7980, size 0x14, virtual false, abstract: false, final false
  inline void InternalSetDefaults();

  /// @brief Method InternalSetMethod, addr 0x30a81b8, size 0x10c, virtual false, abstract: false, final false
  inline void InternalSetMethod(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod methodType);

  /// @brief Method InternalSetRequestHeader, addr 0x30a8870, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError InternalSetRequestHeader(::StringW name, ::StringW value);

  /// @brief Method InternalSetUrl, addr 0x30a8720, size 0x10c, virtual false, abstract: false, final false
  inline void InternalSetUrl(::StringW url);

  static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::StringW url, ::StringW method);

  static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::StringW url, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                                     ::UnityEngine::Networking::UploadHandler* uploadHandler);

  /// @brief Method Release, addr 0x30a784c, size 0x3c, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SendWebRequest, addr 0x30a812c, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest();

  /// @brief Method SerializeFormSections, addr 0x30a90b4, size 0x7cc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeFormSections(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* multipartFormSections,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> boundary);

  /// @brief Method SetCustomMethod, addr 0x30a8300, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError SetCustomMethod(::StringW customMethodName);

  /// @brief Method SetDownloadHandler, addr 0x30a8ce4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError SetDownloadHandler(::UnityEngine::Networking::DownloadHandler* dh);

  /// @brief Method SetMethod, addr 0x30a8174, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError SetMethod(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod methodType);

  /// @brief Method SetRequestHeader, addr 0x30a88c4, size 0x18c, virtual false, abstract: false, final false
  inline void SetRequestHeader(::StringW name, ::StringW value);

  /// @brief Method SetTimeoutMsec, addr 0x30a8d28, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError SetTimeoutMsec(int32_t timeout);

  /// @brief Method SetUploadHandler, addr 0x30a8ca0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError SetUploadHandler(::UnityEngine::Networking::UploadHandler* uh);

  /// @brief Method SetUrl, addr 0x30a882c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError SetUrl(::StringW url);

  constexpr bool const& __cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField();

  constexpr ::UnityEngine::Networking::CertificateHandler*& __cordl_internal_get_m_CertificateHandler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::CertificateHandler*> const& __cordl_internal_get_m_CertificateHandler() const;

  constexpr ::UnityEngine::Networking::DownloadHandler*& __cordl_internal_get_m_DownloadHandler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::DownloadHandler*> const& __cordl_internal_get_m_DownloadHandler() const;

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr ::UnityEngine::Networking::UploadHandler*& __cordl_internal_get_m_UploadHandler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UploadHandler*> const& __cordl_internal_get_m_UploadHandler() const;

  constexpr ::System::Uri*& __cordl_internal_get_m_Uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_m_Uri() const;

  constexpr void __cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField(bool value);

  constexpr void __cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField(bool value);

  constexpr void __cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_CertificateHandler(::UnityEngine::Networking::CertificateHandler* value);

  constexpr void __cordl_internal_set_m_DownloadHandler(::UnityEngine::Networking::DownloadHandler* value);

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  constexpr void __cordl_internal_set_m_UploadHandler(::UnityEngine::Networking::UploadHandler* value);

  constexpr void __cordl_internal_set_m_Uri(::System::Uri* value);

  /// @brief Method .ctor, addr 0x30a7994, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::StringW method);

  /// @brief Method .ctor, addr 0x30a7c1c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler, ::UnityEngine::Networking::UploadHandler* uploadHandler);

  /// @brief Method get_certificateHandler, addr 0x30a8054, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::CertificateHandler* get_certificateHandler();

  /// @brief Method get_disposeCertificateHandlerOnDispose, addr 0x30a77e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposeCertificateHandlerOnDispose();

  /// @brief Method get_disposeDownloadHandlerOnDispose, addr 0x30a77fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposeDownloadHandlerOnDispose();

  /// @brief Method get_disposeUploadHandlerOnDispose, addr 0x30a7810, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposeUploadHandlerOnDispose();

  /// @brief Method get_downloadHandler, addr 0x30a8044, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::DownloadHandler* get_downloadHandler();

  /// @brief Method get_error, addr 0x30a848c, size 0x1a4, virtual false, abstract: false, final false
  inline ::StringW get_error();

  /// @brief Method get_isModifiable, addr 0x30a82c4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isModifiable();

  /// @brief Method get_responseCode, addr 0x30a866c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_responseCode();

  /// @brief Method get_result, addr 0x30a8630, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__Result get_result();

  /// @brief Method get_uploadHandler, addr 0x30a804c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UploadHandler* get_uploadHandler();

  /// @brief Method get_url, addr 0x30a86a8, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_url();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposeCertificateHandlerOnDispose, addr 0x30a77f0, size 0xc, virtual false, abstract: false, final false
  inline void set_disposeCertificateHandlerOnDispose(bool value);

  /// @brief Method set_disposeDownloadHandlerOnDispose, addr 0x30a7804, size 0xc, virtual false, abstract: false, final false
  inline void set_disposeDownloadHandlerOnDispose(bool value);

  /// @brief Method set_disposeUploadHandlerOnDispose, addr 0x30a7818, size 0xc, virtual false, abstract: false, final false
  inline void set_disposeUploadHandlerOnDispose(bool value);

  /// @brief Method set_downloadHandler, addr 0x30a7cc0, size 0x110, virtual false, abstract: false, final false
  inline void set_downloadHandler(::UnityEngine::Networking::DownloadHandler* value);

  /// @brief Method set_method, addr 0x30a7a98, size 0x184, virtual false, abstract: false, final false
  inline void set_method(::StringW value);

  /// @brief Method set_timeout, addr 0x30a8d6c, size 0x15c, virtual false, abstract: false, final false
  inline void set_timeout(int32_t value);

  /// @brief Method set_uploadHandler, addr 0x30a7dd0, size 0x110, virtual false, abstract: false, final false
  inline void set_uploadHandler(::UnityEngine::Networking::UploadHandler* value);

  /// @brief Method set_url, addr 0x30a7a10, size 0x88, virtual false, abstract: false, final false
  inline void set_url(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequest(UnityWebRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequest(UnityWebRequest const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  /// @brief Field m_DownloadHandler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::DownloadHandler* ___m_DownloadHandler;

  /// @brief Field m_UploadHandler, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::UploadHandler* ___m_UploadHandler;

  /// @brief Field m_CertificateHandler, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Networking::CertificateHandler* ___m_CertificateHandler;

  /// @brief Field m_Uri, offset: 0x30, size: 0x8, def value: None
  ::System::Uri* ___m_Uri;

  /// @brief Field <disposeCertificateHandlerOnDispose>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____disposeCertificateHandlerOnDispose_k__BackingField;

  /// @brief Field <disposeDownloadHandlerOnDispose>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____disposeDownloadHandlerOnDispose_k__BackingField;

  /// @brief Field <disposeUploadHandlerOnDispose>k__BackingField, offset: 0x3a, size: 0x1, def value: None
  bool ____disposeUploadHandlerOnDispose_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_DownloadHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_UploadHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_CertificateHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_Uri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeCertificateHandlerOnDispose_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeDownloadHandlerOnDispose_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeUploadHandlerOnDispose_k__BackingField) == 0x3a, "Offset mismatch!");

} // namespace UnityEngine::Networking
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::__UnityWebRequest__Result, "UnityEngine.Networking", "UnityWebRequest/Result");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestError");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestMethod");
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequest*, "UnityEngine.Networking", "UnityWebRequest");
