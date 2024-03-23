#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAmazonWebServiceRequest)
namespace Amazon::Runtime {
class RequestEventHandler;
}
namespace Amazon::Runtime {
class StreamTransferProgressArgs;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class IAmazonWebServiceRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::IAmazonWebServiceRequest);
// Type: Amazon.Runtime.Internal::IAmazonWebServiceRequest
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::IAmazonWebServiceRequest*
class CORDL_TYPE IAmazonWebServiceRequest {
public:
  // Declarations
  __declspec(property(get = get_RequestState))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* RequestState;

  __declspec(property(get = get_StreamUploadProgressCallback,
                      put = set_StreamUploadProgressCallback))::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* StreamUploadProgressCallback;

  __declspec(property(get = get_UseSigV4, put = set_UseSigV4)) bool UseSigV4;

  /// @brief Method AddBeforeRequestHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddBeforeRequestHandler(::Amazon::Runtime::RequestEventHandler* handler);

  /// @brief Method RemoveBeforeRequestHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveBeforeRequestHandler(::Amazon::Runtime::RequestEventHandler* handler);

  /// @brief Method get_RequestState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* get_RequestState();

  /// @brief Method get_StreamUploadProgressCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* get_StreamUploadProgressCallback();

  /// @brief Method get_UseSigV4, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UseSigV4();

  /// @brief Method set_StreamUploadProgressCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_StreamUploadProgressCallback(::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value);

  /// @brief Method set_UseSigV4, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UseSigV4(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IAmazonWebServiceRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAmazonWebServiceRequest(IAmazonWebServiceRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAmazonWebServiceRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAmazonWebServiceRequest(IAmazonWebServiceRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::IAmazonWebServiceRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::IAmazonWebServiceRequest*, "Amazon.Runtime.Internal", "IAmazonWebServiceRequest");
