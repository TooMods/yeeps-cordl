#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FailedDirectedTextMessage)
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
class Exception;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class IFailedDirectedTextMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class FailedDirectedTextMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::FailedDirectedTextMessage);
// Type: Unity.Services.Vivox::FailedDirectedTextMessage
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::FailedDirectedTextMessage*
class CORDL_TYPE FailedDirectedTextMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Exception, put = set_Exception))::System::Exception* Exception;

  __declspec(property(get = get_FromSelf, put = set_FromSelf)) bool FromSelf;

  /// @brief Field PropertyChanged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_RequestId, put = set_RequestId))::StringW RequestId;

  __declspec(property(get = get_Sender, put = set_Sender))::Unity::Services::Vivox::AccountId* Sender;

  __declspec(property(get = get_StatusCode, put = set_StatusCode)) int32_t StatusCode;

  /// @brief Field <FromSelf>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__FromSelf_k__BackingField, put = __cordl_internal_set__FromSelf_k__BackingField)) bool _FromSelf_k__BackingField;

  /// @brief Field <RequestId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestId_k__BackingField, put = __cordl_internal_set__RequestId_k__BackingField))::StringW _RequestId_k__BackingField;

  /// @brief Field <Sender>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Sender_k__BackingField, put = __cordl_internal_set__Sender_k__BackingField))::Unity::Services::Vivox::AccountId* _Sender_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__StatusCode_k__BackingField, put = __cordl_internal_set__StatusCode_k__BackingField)) int32_t _StatusCode_k__BackingField;

  /// @brief Field _exception, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception))::System::Exception* _exception;

  /// @brief Convert operator to "::Unity::Services::Vivox::IFailedDirectedTextMessage"
  constexpr operator ::Unity::Services::Vivox::IFailedDirectedTextMessage*() noexcept;

  static inline ::Unity::Services::Vivox::FailedDirectedTextMessage* New_ctor();

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr bool const& __cordl_internal_get__FromSelf_k__BackingField() const;

  constexpr bool& __cordl_internal_get__FromSelf_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField();

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get__Sender_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get__Sender_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__StatusCode_k__BackingField();

  constexpr ::System::Exception*& __cordl_internal_get__exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__exception() const;

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__FromSelf_k__BackingField(bool value);

  constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Sender_k__BackingField(::Unity::Services::Vivox::AccountId* value);

  constexpr void __cordl_internal_set__StatusCode_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__exception(::System::Exception* value);

  /// @brief Method .ctor, addr 0x2cac704, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PropertyChanged, addr 0x2cac4d0, size 0x9c, virtual false, abstract: false, final false
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_Exception, addr 0x2cac608, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_FromSelf, addr 0x2cac6c0, size 0x8, virtual true, abstract: false, final true
  inline bool get_FromSelf();

  /// @brief Method get_RequestId, addr 0x2cac6e4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_RequestId();

  /// @brief Method get_Sender, addr 0x2cac6d4, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_Sender();

  /// @brief Method get_StatusCode, addr 0x2cac6f4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_StatusCode();

  /// @brief Convert to "::Unity::Services::Vivox::IFailedDirectedTextMessage"
  constexpr ::Unity::Services::Vivox::IFailedDirectedTextMessage* i___Unity__Services__Vivox__IFailedDirectedTextMessage() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2cac56c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_Exception, addr 0x2cac610, size 0xb0, virtual false, abstract: false, final false
  inline void set_Exception(::System::Exception* value);

  /// @brief Method set_FromSelf, addr 0x2cac6c8, size 0xc, virtual false, abstract: false, final false
  inline void set_FromSelf(bool value);

  /// @brief Method set_RequestId, addr 0x2cac6ec, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestId(::StringW value);

  /// @brief Method set_Sender, addr 0x2cac6dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Sender(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method set_StatusCode, addr 0x2cac6fc, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusCode(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FailedDirectedTextMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FailedDirectedTextMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FailedDirectedTextMessage(FailedDirectedTextMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FailedDirectedTextMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FailedDirectedTextMessage(FailedDirectedTextMessage const&) = delete;

  /// @brief Field _exception, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ____exception;

  /// @brief Field PropertyChanged, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field <FromSelf>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____FromSelf_k__BackingField;

  /// @brief Field <Sender>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ____Sender_k__BackingField;

  /// @brief Field <RequestId>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____RequestId_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____StatusCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::FailedDirectedTextMessage, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::FailedDirectedTextMessage, ____exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::FailedDirectedTextMessage, ___PropertyChanged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::FailedDirectedTextMessage, ____FromSelf_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::FailedDirectedTextMessage, ____Sender_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::FailedDirectedTextMessage, ____RequestId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::FailedDirectedTextMessage, ____StatusCode_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::FailedDirectedTextMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::FailedDirectedTextMessage*, "Unity.Services.Vivox", "FailedDirectedTextMessage");
