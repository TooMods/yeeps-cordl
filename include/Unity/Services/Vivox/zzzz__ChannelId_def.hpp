#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__ChannelType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelId)
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
class Channel3DProperties;
}
namespace Unity::Services::Vivox {
struct ChannelType;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ChannelId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ChannelId);
// Type: Unity.Services.Vivox::ChannelId
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ChannelId*
class CORDL_TYPE ChannelId : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Domain))::StringW Domain;

  __declspec(property(get = get_EnvironmentId))::StringW EnvironmentId;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Issuer))::StringW Issuer;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Properties))::Unity::Services::Vivox::Channel3DProperties* Properties;

  __declspec(property(get = get_Type))::Unity::Services::Vivox::ChannelType Type;

  /// @brief Field <EnvironmentId>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__EnvironmentId_k__BackingField, put = __cordl_internal_set__EnvironmentId_k__BackingField))::StringW _EnvironmentId_k__BackingField;

  /// @brief Field <Issuer>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Issuer_k__BackingField, put = __cordl_internal_set__Issuer_k__BackingField))::StringW _Issuer_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Properties_k__BackingField,
                      put = __cordl_internal_set__Properties_k__BackingField))::Unity::Services::Vivox::Channel3DProperties* _Properties_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::Unity::Services::Vivox::ChannelType _Type_k__BackingField;

  /// @brief Field _domain, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__domain, put = __cordl_internal_set__domain))::StringW _domain;

  /// @brief Method Equals, addr 0x1c2d754, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x1c2d850, size 0x78, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Services::Vivox::ChannelId* other);

  /// @brief Method GetHashCode, addr 0x1c2d8c8, size 0xe0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUriDesignator, addr 0x1c2d014, size 0x118, virtual false, abstract: false, final false
  inline ::StringW GetUriDesignator(::Unity::Services::Vivox::ChannelType value);

  /// @brief Method IsNullOrEmpty, addr 0x1c2d9ec, size 0x10, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::Unity::Services::Vivox::ChannelId* id);

  /// @brief Method IsValid, addr 0x1c2df00, size 0x50, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValidName, addr 0x1c2d5ac, size 0xe4, virtual false, abstract: false, final false
  inline bool IsValidName(::StringW name);

  static inline ::Unity::Services::Vivox::ChannelId* New_ctor(::StringW issuer, ::StringW name, ::StringW domain, ::Unity::Services::Vivox::ChannelType type,
                                                              ::Unity::Services::Vivox::Channel3DProperties* properties, ::StringW environmentId);

  static inline ::Unity::Services::Vivox::ChannelId* New_ctor(::StringW uri);

  /// @brief Method ToString, addr 0x1c2d9fc, size 0x504, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__EnvironmentId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__EnvironmentId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Issuer_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Issuer_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::Unity::Services::Vivox::Channel3DProperties*& __cordl_internal_get__Properties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Channel3DProperties*> const& __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::ChannelType const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::ChannelType& __cordl_internal_get__Type_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__domain() const;

  constexpr ::StringW& __cordl_internal_get__domain();

  constexpr void __cordl_internal_set__EnvironmentId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Issuer_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Properties_k__BackingField(::Unity::Services::Vivox::Channel3DProperties* value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::Unity::Services::Vivox::ChannelType value);

  constexpr void __cordl_internal_set__domain(::StringW value);

  /// @brief Method .ctor, addr 0x1c28080, size 0x40c, virtual false, abstract: false, final false
  inline void _ctor(::StringW issuer, ::StringW name, ::StringW domain, ::Unity::Services::Vivox::ChannelType type, ::Unity::Services::Vivox::Channel3DProperties* properties, ::StringW environmentId);

  /// @brief Method .ctor, addr 0x1c2d12c, size 0x480, virtual false, abstract: false, final false
  inline void _ctor(::StringW uri);

  /// @brief Method get_Domain, addr 0x1c2d6a8, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW get_Domain();

  /// @brief Method get_EnvironmentId, addr 0x1c2d6a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EnvironmentId();

  /// @brief Method get_IsEmpty, addr 0x1c2d9a8, size 0x44, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Issuer, addr 0x1c2d690, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Issuer();

  /// @brief Method get_Name, addr 0x1c2d698, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Properties, addr 0x1c2d74c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::Channel3DProperties* get_Properties();

  /// @brief Method get_Type, addr 0x1c2d744, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ChannelType get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelId(ChannelId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelId(ChannelId const&) = delete;

  /// @brief Field _domain, offset: 0x10, size: 0x8, def value: None
  ::StringW ____domain;

  /// @brief Field <Issuer>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Issuer_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <EnvironmentId>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____EnvironmentId_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::Unity::Services::Vivox::ChannelType ____Type_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::Channel3DProperties* ____Properties_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ChannelId, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelId, ____domain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelId, ____Issuer_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelId, ____Name_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelId, ____EnvironmentId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelId, ____Type_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChannelId, ____Properties_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ChannelId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ChannelId*, "Unity.Services.Vivox", "ChannelId");
