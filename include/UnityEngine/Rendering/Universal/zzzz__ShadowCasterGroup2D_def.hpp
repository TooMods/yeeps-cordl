#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowCasterGroup2D)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class ShadowCaster2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShadowCasterGroup2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D);
// Type: UnityEngine.Rendering.Universal::ShadowCasterGroup2D
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ShadowCasterGroup2D*
class CORDL_TYPE ShadowCasterGroup2D : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_ShadowCasters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowCasters,
                      put = __cordl_internal_set_m_ShadowCasters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCaster2D>>* m_ShadowCasters;

  /// @brief Field m_ShadowGroup, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowGroup, put = __cordl_internal_set_m_ShadowGroup)) int32_t m_ShadowGroup;

  /// @brief Method CacheValues, addr 0x2c557fc, size 0x90, virtual true, abstract: false, final false
  inline void CacheValues();

  /// @brief Method GetShadowCasters, addr 0x2c5588c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCaster2D>>* GetShadowCasters();

  /// @brief Method GetShadowGroup, addr 0x2c55894, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetShadowGroup();

  static inline ::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* New_ctor();

  /// @brief Method RegisterShadowCaster2D, addr 0x2c5589c, size 0xf0, virtual false, abstract: false, final false
  inline void RegisterShadowCaster2D(::UnityEngine::Rendering::Universal::ShadowCaster2D* shadowCaster2D);

  /// @brief Method UnregisterShadowCaster2D, addr 0x2c5598c, size 0x60, virtual false, abstract: false, final false
  inline void UnregisterShadowCaster2D(::UnityEngine::Rendering::Universal::ShadowCaster2D* shadowCaster2D);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCaster2D>>*& __cordl_internal_get_m_ShadowCasters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCaster2D>>*> const&
  __cordl_internal_get_m_ShadowCasters() const;

  constexpr int32_t const& __cordl_internal_get_m_ShadowGroup() const;

  constexpr int32_t& __cordl_internal_get_m_ShadowGroup();

  constexpr void __cordl_internal_set_m_ShadowCasters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCaster2D>>* value);

  constexpr void __cordl_internal_set_m_ShadowGroup(int32_t value);

  /// @brief Method .ctor, addr 0x2c559ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowCasterGroup2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadowCasterGroup2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowCasterGroup2D(ShadowCasterGroup2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowCasterGroup2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowCasterGroup2D(ShadowCasterGroup2D const&) = delete;

  /// @brief Field m_ShadowGroup, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_ShadowGroup;

  /// @brief Field m_ShadowCasters, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCaster2D>>* ___m_ShadowCasters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D, ___m_ShadowGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D, ___m_ShadowCasters) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D*, "UnityEngine.Rendering.Universal", "ShadowCasterGroup2D");
