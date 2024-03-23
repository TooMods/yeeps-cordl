#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(AvatarIdentity)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarIdentity;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarIdentity);
// Type: ::AvatarIdentity
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AvatarIdentity*
class CORDL_TYPE AvatarIdentity : public ::System::Object {
public:
  // Declarations
  /// @brief Field <eyeColor>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__eyeColor_k__BackingField, put = __cordl_internal_set__eyeColor_k__BackingField))::UnityEngine::Color _eyeColor_k__BackingField;

  /// @brief Field <eyeMaterial>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__eyeMaterial_k__BackingField, put = __cordl_internal_set__eyeMaterial_k__BackingField))::UnityW<::UnityEngine::Material> _eyeMaterial_k__BackingField;

  /// @brief Field <skinColor>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__skinColor_k__BackingField, put = __cordl_internal_set__skinColor_k__BackingField))::UnityEngine::Color _skinColor_k__BackingField;

  /// @brief Field <skinMaterial>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__skinMaterial_k__BackingField,
                      put = __cordl_internal_set__skinMaterial_k__BackingField))::UnityW<::UnityEngine::Material> _skinMaterial_k__BackingField;

  __declspec(property(get = get_eyeColor, put = set_eyeColor))::UnityEngine::Color eyeColor;

  __declspec(property(get = get_eyeMaterial, put = set_eyeMaterial))::UnityW<::UnityEngine::Material> eyeMaterial;

  __declspec(property(get = get_skinColor, put = set_skinColor))::UnityEngine::Color skinColor;

  __declspec(property(get = get_skinMaterial, put = set_skinMaterial))::UnityW<::UnityEngine::Material> skinMaterial;

  static inline ::GlobalNamespace::AvatarIdentity* New_ctor(::UnityEngine::Color skinColor, ::UnityEngine::Material* skinMaterial, ::UnityEngine::Color eyeColor, ::UnityEngine::Material* eyeMaterial);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__eyeColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__eyeColor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__eyeMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__eyeMaterial_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__skinColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__skinColor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__skinMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__skinMaterial_k__BackingField();

  constexpr void __cordl_internal_set__eyeColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__eyeMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__skinColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__skinMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x174b080, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color skinColor, ::UnityEngine::Material* skinMaterial, ::UnityEngine::Color eyeColor, ::UnityEngine::Material* eyeMaterial);

  /// @brief Method get_eyeColor, addr 0x174b058, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_eyeColor();

  /// @brief Method get_eyeMaterial, addr 0x174b070, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_eyeMaterial();

  /// @brief Method get_skinColor, addr 0x174b030, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_skinColor();

  /// @brief Method get_skinMaterial, addr 0x174b048, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_skinMaterial();

  /// @brief Method set_eyeColor, addr 0x174b064, size 0xc, virtual false, abstract: false, final false
  inline void set_eyeColor(::UnityEngine::Color value);

  /// @brief Method set_eyeMaterial, addr 0x174b078, size 0x8, virtual false, abstract: false, final false
  inline void set_eyeMaterial(::UnityEngine::Material* value);

  /// @brief Method set_skinColor, addr 0x174b03c, size 0xc, virtual false, abstract: false, final false
  inline void set_skinColor(::UnityEngine::Color value);

  /// @brief Method set_skinMaterial, addr 0x174b050, size 0x8, virtual false, abstract: false, final false
  inline void set_skinMaterial(::UnityEngine::Material* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarIdentity(AvatarIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarIdentity(AvatarIdentity const&) = delete;

  /// @brief Field <skinColor>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ____skinColor_k__BackingField;

  /// @brief Field <skinMaterial>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____skinMaterial_k__BackingField;

  /// @brief Field <eyeColor>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____eyeColor_k__BackingField;

  /// @brief Field <eyeMaterial>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____eyeMaterial_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarIdentity, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarIdentity, ____skinColor_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarIdentity, ____skinMaterial_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarIdentity, ____eyeColor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarIdentity, ____eyeMaterial_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarIdentity);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarIdentity*, "", "AvatarIdentity");
