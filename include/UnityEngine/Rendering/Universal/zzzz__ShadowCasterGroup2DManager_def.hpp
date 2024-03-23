#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ShadowCasterGroup2DManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class CompositeShadowCaster2D;
}
namespace UnityEngine::Rendering::Universal {
class ShadowCaster2D;
}
namespace UnityEngine::Rendering::Universal {
class ShadowCasterGroup2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShadowCasterGroup2DManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShadowCasterGroup2DManager);
// Type: UnityEngine.Rendering.Universal::ShadowCasterGroup2DManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ShadowCasterGroup2DManager*
class CORDL_TYPE ShadowCasterGroup2DManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_ShadowCasterGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ShadowCasterGroups,
                             put = setStaticF_s_ShadowCasterGroups))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>>* s_ShadowCasterGroups;

  /// @brief Method AddGroup, addr 0x2c55f5c, size 0xf4, virtual false, abstract: false, final false
  static inline void AddGroup(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* group);

  /// @brief Method AddShadowCasterGroupToList, addr 0x2c55ba4, size 0xd4, virtual false, abstract: false, final false
  static inline void AddShadowCasterGroupToList(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* shadowCaster,
                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>>* list);

  /// @brief Method AddToShadowCasterGroup, addr 0x2c55db4, size 0x118, virtual false, abstract: false, final false
  static inline bool AddToShadowCasterGroup(::UnityEngine::Rendering::Universal::ShadowCaster2D* shadowCaster, ByRef<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D*> shadowCasterGroup);

  /// @brief Method CacheValues, addr 0x2c55a3c, size 0x168, virtual false, abstract: false, final false
  static inline void CacheValues();

  /// @brief Method FindTopMostCompositeShadowCaster, addr 0x2c55cd0, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::Universal::CompositeShadowCaster2D> FindTopMostCompositeShadowCaster(::UnityEngine::Rendering::Universal::ShadowCaster2D* shadowCaster);

  static inline ::UnityEngine::Rendering::Universal::ShadowCasterGroup2DManager* New_ctor();

  /// @brief Method RemoveFromShadowCasterGroup, addr 0x2c55ecc, size 0x90, virtual false, abstract: false, final false
  static inline void RemoveFromShadowCasterGroup(::UnityEngine::Rendering::Universal::ShadowCaster2D* shadowCaster, ::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* shadowCasterGroup);

  /// @brief Method RemoveGroup, addr 0x2c56050, size 0x98, virtual false, abstract: false, final false
  static inline void RemoveGroup(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* group);

  /// @brief Method RemoveShadowCasterGroupFromList, addr 0x2c55c78, size 0x58, virtual false, abstract: false, final false
  static inline void RemoveShadowCasterGroupFromList(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* shadowCaster,
                                                     ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>>* list);

  /// @brief Method .ctor, addr 0x2c560e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>>* getStaticF_s_ShadowCasterGroups();

  /// @brief Method get_shadowCasterGroups, addr 0x2c559f4, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>>* get_shadowCasterGroups();

  static inline void setStaticF_s_ShadowCasterGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowCasterGroup2DManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadowCasterGroup2DManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowCasterGroup2DManager(ShadowCasterGroup2DManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowCasterGroup2DManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowCasterGroup2DManager(ShadowCasterGroup2DManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowCasterGroup2DManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowCasterGroup2DManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowCasterGroup2DManager*, "UnityEngine.Rendering.Universal", "ShadowCasterGroup2DManager");
