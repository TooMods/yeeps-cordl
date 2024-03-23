#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__ConversationType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VivoxConversation)
namespace Unity::Services::Vivox {
struct ConversationType;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxConversation;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxConversation);
// Type: Unity.Services.Vivox::VivoxConversation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxConversation*
class CORDL_TYPE VivoxConversation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConversationType))::Unity::Services::Vivox::ConversationType ConversationType;

  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Field <ConversationType>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ConversationType_k__BackingField,
                      put = __cordl_internal_set__ConversationType_k__BackingField))::Unity::Services::Vivox::ConversationType _ConversationType_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  static inline ::Unity::Services::Vivox::VivoxConversation* New_ctor(::StringW name, ::Unity::Services::Vivox::ConversationType conversationType);

  constexpr ::Unity::Services::Vivox::ConversationType const& __cordl_internal_get__ConversationType_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::ConversationType& __cordl_internal_get__ConversationType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__ConversationType_k__BackingField(::Unity::Services::Vivox::ConversationType value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1c13348, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::Unity::Services::Vivox::ConversationType conversationType);

  /// @brief Method get_ConversationType, addr 0x1c13340, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ConversationType get_ConversationType();

  /// @brief Method get_Name, addr 0x1c13338, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxConversation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxConversation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxConversation(VivoxConversation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxConversation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxConversation(VivoxConversation const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <ConversationType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Unity::Services::Vivox::ConversationType ____ConversationType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxConversation, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxConversation, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxConversation, ____ConversationType_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxConversation);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxConversation*, "Unity.Services.Vivox", "VivoxConversation");
