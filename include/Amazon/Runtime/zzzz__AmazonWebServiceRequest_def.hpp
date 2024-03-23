#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonWebServiceRequest)
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
namespace Amazon::Runtime::Internal {
class IAmazonWebServiceRequest;
}
namespace Amazon::Runtime {
class RequestEventArgs;
}
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
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AmazonWebServiceRequest);
// Type: Amazon.Runtime::AmazonWebServiceRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AmazonWebServiceRequest*
class CORDL_TYPE AmazonWebServiceRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_RequestState))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Object*>* Amazon_Runtime_Internal_IAmazonWebServiceRequest_RequestState;

  __declspec(property(get = Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_StreamUploadProgressCallback,
                      put = Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_StreamUploadProgressCallback))::System::
      EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback;

  __declspec(property(get = Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_UseSigV4,
                      put = Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_UseSigV4)) bool Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4;

  __declspec(property(get = get_Expect100Continue)) bool Expect100Continue;

  __declspec(property(get = get_IncludeSHA256Header)) bool IncludeSHA256Header;

  __declspec(property(get = get_UserAgentAddition, put = set_UserAgentAddition))::StringW UserAgentAddition;

  /// @brief Field <Amazon.Runtime.Internal.IAmazonWebServiceRequest.StreamUploadProgressCallback>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField,
                      put = __cordl_internal_set__Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField))::System::
      EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* _Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField;

  /// @brief Field <Amazon.Runtime.Internal.IAmazonWebServiceRequest.UseSigV4>k__BackingField, offset 0x30, size 0x1
  __declspec(
      property(get = __cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField,
               put = __cordl_internal_set__Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField)) bool _Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField;

  /// @brief Field <UserAgentAddition>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__UserAgentAddition_k__BackingField, put = __cordl_internal_set__UserAgentAddition_k__BackingField))::StringW _UserAgentAddition_k__BackingField;

  /// @brief Field mBeforeRequestEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mBeforeRequestEvent, put = __cordl_internal_set_mBeforeRequestEvent))::Amazon::Runtime::RequestEventHandler* mBeforeRequestEvent;

  /// @brief Field requestState, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_requestState, put = __cordl_internal_set_requestState))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* requestState;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::IAmazonWebServiceRequest"
  constexpr operator ::Amazon::Runtime::Internal::IAmazonWebServiceRequest*() noexcept;

  /// @brief Method Amazon.Runtime.Internal.IAmazonWebServiceRequest.AddBeforeRequestHandler, addr 0x1fdf514, size 0x4, virtual true, abstract: false, final true
  inline void Amazon_Runtime_Internal_IAmazonWebServiceRequest_AddBeforeRequestHandler(::Amazon::Runtime::RequestEventHandler* handler);

  /// @brief Method Amazon.Runtime.Internal.IAmazonWebServiceRequest.RemoveBeforeRequestHandler, addr 0x1fdf518, size 0x4, virtual true, abstract: false, final true
  inline void Amazon_Runtime_Internal_IAmazonWebServiceRequest_RemoveBeforeRequestHandler(::Amazon::Runtime::RequestEventHandler* handler);

  /// @brief Method Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_RequestState, addr 0x1fdf48c, size 0x80, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_RequestState();

  /// @brief Method Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_StreamUploadProgressCallback, addr 0x1fdf47c, size 0x8, virtual true, abstract: false, final true
  inline ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_StreamUploadProgressCallback();

  /// @brief Method Amazon.Runtime.Internal.IAmazonWebServiceRequest.get_UseSigV4, addr 0x1fdf51c, size 0x8, virtual true, abstract: false, final true
  inline bool Amazon_Runtime_Internal_IAmazonWebServiceRequest_get_UseSigV4();

  /// @brief Method Amazon.Runtime.Internal.IAmazonWebServiceRequest.set_StreamUploadProgressCallback, addr 0x1fdf484, size 0x8, virtual true, abstract: false, final true
  inline void Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_StreamUploadProgressCallback(::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value);

  /// @brief Method Amazon.Runtime.Internal.IAmazonWebServiceRequest.set_UseSigV4, addr 0x1fdf524, size 0xc, virtual true, abstract: false, final true
  inline void Amazon_Runtime_Internal_IAmazonWebServiceRequest_set_UseSigV4(bool value);

  /// @brief Method CreateSigner, addr 0x1fdf558, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* CreateSigner();

  /// @brief Method FireBeforeRequestEvent, addr 0x1fdd14c, size 0x1c, virtual false, abstract: false, final false
  inline void FireBeforeRequestEvent(::System::Object* sender, ::Amazon::Runtime::RequestEventArgs* args);

  /// @brief Method GetExpect100Continue, addr 0x1fdf538, size 0xc, virtual false, abstract: false, final false
  inline bool GetExpect100Continue();

  /// @brief Method GetIncludeSHA256Header, addr 0x1fdf54c, size 0xc, virtual false, abstract: false, final false
  inline bool GetIncludeSHA256Header();

  /// @brief Method GetSigner, addr 0x1fdf560, size 0x10, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* GetSigner();

  static inline ::Amazon::Runtime::AmazonWebServiceRequest* New_ctor();

  constexpr ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*&
  __cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*> const&
  __cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UserAgentAddition_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UserAgentAddition_k__BackingField();

  constexpr ::Amazon::Runtime::RequestEventHandler*& __cordl_internal_get_mBeforeRequestEvent();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::RequestEventHandler*> const& __cordl_internal_get_mBeforeRequestEvent() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get_requestState();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const& __cordl_internal_get_requestState() const;

  constexpr void
  __cordl_internal_set__Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField(::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value);

  constexpr void __cordl_internal_set__Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UserAgentAddition_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_mBeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value);

  constexpr void __cordl_internal_set_requestState(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x1fdf50c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_BeforeRequestEvent, addr 0x1fdf22c, size 0x128, virtual false, abstract: false, final false
  inline void add_BeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value);

  /// @brief Method get_Expect100Continue, addr 0x1fdf530, size 0x8, virtual true, abstract: false, final false
  inline bool get_Expect100Continue();

  /// @brief Method get_IncludeSHA256Header, addr 0x1fdf544, size 0x8, virtual true, abstract: false, final false
  inline bool get_IncludeSHA256Header();

  /// @brief Method get_UserAgentAddition, addr 0x1fdf21c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserAgentAddition();

  /// @brief Convert to "::Amazon::Runtime::Internal::IAmazonWebServiceRequest"
  constexpr ::Amazon::Runtime::Internal::IAmazonWebServiceRequest* i___Amazon__Runtime__Internal__IAmazonWebServiceRequest() noexcept;

  /// @brief Method remove_BeforeRequestEvent, addr 0x1fdf354, size 0x128, virtual false, abstract: false, final false
  inline void remove_BeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value);

  /// @brief Method set_UserAgentAddition, addr 0x1fdf224, size 0x8, virtual false, abstract: false, final false
  inline void set_UserAgentAddition(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonWebServiceRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonWebServiceRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonWebServiceRequest(AmazonWebServiceRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonWebServiceRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonWebServiceRequest(AmazonWebServiceRequest const&) = delete;

  /// @brief Field mBeforeRequestEvent, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::RequestEventHandler* ___mBeforeRequestEvent;

  /// @brief Field <UserAgentAddition>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____UserAgentAddition_k__BackingField;

  /// @brief Field <Amazon.Runtime.Internal.IAmazonWebServiceRequest.StreamUploadProgressCallback>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* ____Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField;

  /// @brief Field requestState, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* ___requestState;

  /// @brief Field <Amazon.Runtime.Internal.IAmazonWebServiceRequest.UseSigV4>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AmazonWebServiceRequest, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonWebServiceRequest, ___mBeforeRequestEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonWebServiceRequest, ____UserAgentAddition_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonWebServiceRequest, ____Amazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallback_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonWebServiceRequest, ___requestState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonWebServiceRequest, ____Amazon_Runtime_Internal_IAmazonWebServiceRequest_UseSigV4_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AmazonWebServiceRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AmazonWebServiceRequest*, "Amazon.Runtime", "AmazonWebServiceRequest");
