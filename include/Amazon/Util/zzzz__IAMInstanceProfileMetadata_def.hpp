#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAMInstanceProfileMetadata)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Util {
class IAMInstanceProfileMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::IAMInstanceProfileMetadata);
// Type: Amazon.Util::IAMInstanceProfileMetadata
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::IAMInstanceProfileMetadata*
class CORDL_TYPE IAMInstanceProfileMetadata : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Code, put = set_Code))::StringW Code;

  __declspec(property(get = get_InstanceProfileArn, put = set_InstanceProfileArn))::StringW InstanceProfileArn;

  __declspec(property(get = get_InstanceProfileId, put = set_InstanceProfileId))::StringW InstanceProfileId;

  __declspec(property(get = get_LastUpdated, put = set_LastUpdated))::System::DateTime LastUpdated;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  /// @brief Field <Code>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Code_k__BackingField, put = __cordl_internal_set__Code_k__BackingField))::StringW _Code_k__BackingField;

  /// @brief Field <InstanceProfileArn>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__InstanceProfileArn_k__BackingField, put = __cordl_internal_set__InstanceProfileArn_k__BackingField))::StringW _InstanceProfileArn_k__BackingField;

  /// @brief Field <InstanceProfileId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__InstanceProfileId_k__BackingField, put = __cordl_internal_set__InstanceProfileId_k__BackingField))::StringW _InstanceProfileId_k__BackingField;

  /// @brief Field <LastUpdated>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__LastUpdated_k__BackingField, put = __cordl_internal_set__LastUpdated_k__BackingField))::System::DateTime _LastUpdated_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  static inline ::Amazon::Util::IAMInstanceProfileMetadata* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Code_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Code_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__InstanceProfileArn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__InstanceProfileArn_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__InstanceProfileId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__InstanceProfileId_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__LastUpdated_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__LastUpdated_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr void __cordl_internal_set__Code_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__InstanceProfileArn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__InstanceProfileId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__LastUpdated_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2206c30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Code, addr 0x22098b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Code();

  /// @brief Method get_InstanceProfileArn, addr 0x22098e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InstanceProfileArn();

  /// @brief Method get_InstanceProfileId, addr 0x22098f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InstanceProfileId();

  /// @brief Method get_LastUpdated, addr 0x22098d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastUpdated();

  /// @brief Method get_Message, addr 0x22098c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method set_Code, addr 0x22098bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::StringW value);

  /// @brief Method set_InstanceProfileArn, addr 0x22098ec, size 0x8, virtual false, abstract: false, final false
  inline void set_InstanceProfileArn(::StringW value);

  /// @brief Method set_InstanceProfileId, addr 0x22098fc, size 0x8, virtual false, abstract: false, final false
  inline void set_InstanceProfileId(::StringW value);

  /// @brief Method set_LastUpdated, addr 0x22098dc, size 0x8, virtual false, abstract: false, final false
  inline void set_LastUpdated(::System::DateTime value);

  /// @brief Method set_Message, addr 0x22098cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IAMInstanceProfileMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IAMInstanceProfileMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAMInstanceProfileMetadata(IAMInstanceProfileMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAMInstanceProfileMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAMInstanceProfileMetadata(IAMInstanceProfileMetadata const&) = delete;

  /// @brief Field <Code>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Code_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <LastUpdated>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ____LastUpdated_k__BackingField;

  /// @brief Field <InstanceProfileArn>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____InstanceProfileArn_k__BackingField;

  /// @brief Field <InstanceProfileId>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____InstanceProfileId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::IAMInstanceProfileMetadata, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::IAMInstanceProfileMetadata, ____Code_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMInstanceProfileMetadata, ____Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMInstanceProfileMetadata, ____LastUpdated_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMInstanceProfileMetadata, ____InstanceProfileArn_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMInstanceProfileMetadata, ____InstanceProfileId_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::IAMInstanceProfileMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::IAMInstanceProfileMetadata*, "Amazon.Util", "IAMInstanceProfileMetadata");
