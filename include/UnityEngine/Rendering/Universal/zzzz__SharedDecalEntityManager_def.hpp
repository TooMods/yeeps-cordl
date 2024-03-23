#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedDecalEntityManager)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering::Universal {
class DecalProjector;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class SharedDecalEntityManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::SharedDecalEntityManager);
// Type: UnityEngine.Rendering.Universal::SharedDecalEntityManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::SharedDecalEntityManager*
class CORDL_TYPE SharedDecalEntityManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_DecalEntityManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalEntityManager, put = __cordl_internal_set_m_DecalEntityManager))::UnityEngine::Rendering::Universal::DecalEntityManager* m_DecalEntityManager;

  /// @brief Field m_ReferenceCounter, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReferenceCounter, put = __cordl_internal_set_m_ReferenceCounter)) int32_t m_ReferenceCounter;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2729664, size 0x158, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Get, addr 0x27293f4, size 0x254, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalEntityManager* Get();

  static inline ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* New_ctor();

  /// @brief Method OnDecalAdd, addr 0x27297bc, size 0x54, virtual false, abstract: false, final false
  inline void OnDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);

  /// @brief Method OnDecalMaterialChange, addr 0x2729890, size 0x28, virtual false, abstract: false, final false
  inline void OnDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);

  /// @brief Method OnDecalPropertyChange, addr 0x2729834, size 0x5c, virtual false, abstract: false, final false
  inline void OnDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);

  /// @brief Method OnDecalRemove, addr 0x2729810, size 0x24, virtual false, abstract: false, final false
  inline void OnDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);

  /// @brief Method Release, addr 0x2729648, size 0x1c, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::Rendering::Universal::DecalEntityManager* decalEntityManager);

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_DecalEntityManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalEntityManager*> const& __cordl_internal_get_m_DecalEntityManager() const;

  constexpr int32_t const& __cordl_internal_get_m_ReferenceCounter() const;

  constexpr int32_t& __cordl_internal_get_m_ReferenceCounter();

  constexpr void __cordl_internal_set_m_DecalEntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_ReferenceCounter(int32_t value);

  /// @brief Method .ctor, addr 0x27298b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedDecalEntityManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedDecalEntityManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedDecalEntityManager(SharedDecalEntityManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedDecalEntityManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedDecalEntityManager(SharedDecalEntityManager const&) = delete;

  /// @brief Field m_DecalEntityManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_DecalEntityManager;

  /// @brief Field m_ReferenceCounter, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_ReferenceCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SharedDecalEntityManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SharedDecalEntityManager, ___m_DecalEntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SharedDecalEntityManager, ___m_ReferenceCounter) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SharedDecalEntityManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SharedDecalEntityManager*, "UnityEngine.Rendering.Universal", "SharedDecalEntityManager");
