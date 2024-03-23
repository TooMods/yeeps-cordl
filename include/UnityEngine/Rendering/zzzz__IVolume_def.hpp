#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVolume)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IVolume;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IVolume);
// Type: UnityEngine.Rendering::IVolume
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::IVolume*
class CORDL_TYPE IVolume {
public:
  // Declarations
  __declspec(property(get = get_colliders))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* colliders;

  __declspec(property(get = get_isGlobal, put = set_isGlobal)) bool isGlobal;

  /// @brief Method get_colliders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_colliders();

  /// @brief Method get_isGlobal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isGlobal();

  /// @brief Method set_isGlobal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isGlobal(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVolume(IVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVolume(IVolume const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IVolume*, "UnityEngine.Rendering", "IVolume");
