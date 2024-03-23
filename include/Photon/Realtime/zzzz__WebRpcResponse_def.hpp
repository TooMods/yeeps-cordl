#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRpcResponse)
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class WebRpcResponse;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::WebRpcResponse);
// Type: Photon.Realtime::WebRpcResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::WebRpcResponse*
class CORDL_TYPE WebRpcResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DebugMessage))::StringW DebugMessage;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_Parameters, put = set_Parameters))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* Parameters;

  __declspec(property(get = get_ResultCode, put = set_ResultCode)) int32_t ResultCode;

  __declspec(property(get = get_ReturnCode)) int32_t ReturnCode;

  /// @brief Field <Message>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <Parameters>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Parameters_k__BackingField,
                      put = __cordl_internal_set__Parameters_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* _Parameters_k__BackingField;

  /// @brief Field <ResultCode>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ResultCode_k__BackingField, put = __cordl_internal_set__ResultCode_k__BackingField)) int32_t _ResultCode_k__BackingField;

  static inline ::Photon::Realtime::WebRpcResponse* New_ctor(::ExitGames::Client::Photon::OperationResponse* response);

  /// @brief Method ToStringFull, addr 0x16130d0, size 0x1a0, virtual false, abstract: false, final false
  inline ::StringW ToStringFull();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__Parameters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const& __cordl_internal_get__Parameters_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__ResultCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ResultCode_k__BackingField();

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Parameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  constexpr void __cordl_internal_set__ResultCode_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x1612f24, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::OperationResponse* response);

  /// @brief Method get_DebugMessage, addr 0x1612f0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DebugMessage();

  /// @brief Method get_Message, addr 0x1612efc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_Name, addr 0x1612ed4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Parameters, addr 0x1612f14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* get_Parameters();

  /// @brief Method get_ResultCode, addr 0x1612ee4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ResultCode();

  /// @brief Method get_ReturnCode, addr 0x1612ef4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReturnCode();

  /// @brief Method set_Message, addr 0x1612f04, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

  /// @brief Method set_Name, addr 0x1612edc, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Parameters, addr 0x1612f1c, size 0x8, virtual false, abstract: false, final false
  inline void set_Parameters(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method set_ResultCode, addr 0x1612eec, size 0x8, virtual false, abstract: false, final false
  inline void set_ResultCode(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRpcResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRpcResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRpcResponse(WebRpcResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRpcResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRpcResponse(WebRpcResponse const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <ResultCode>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____ResultCode_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <Parameters>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* ____Parameters_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::WebRpcResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::WebRpcResponse, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::WebRpcResponse, ____ResultCode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::WebRpcResponse, ____Message_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::WebRpcResponse, ____Parameters_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::WebRpcResponse);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::WebRpcResponse*, "Photon.Realtime", "WebRpcResponse");
