#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
CORDL_MODULE_EXPORT(OVROnCompleteListener)
// Forward declare root types
namespace GlobalNamespace {
class OVROnCompleteListener;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVROnCompleteListener);
// Type: ::OVROnCompleteListener
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVROnCompleteListener*
class CORDL_TYPE OVROnCompleteListener : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  static inline ::GlobalNamespace::OVROnCompleteListener* New_ctor();

  /// @brief Method .ctor, addr 0xfc0988, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method onFailure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void onFailure();

  /// @brief Method onSuccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void onSuccess();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVROnCompleteListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVROnCompleteListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVROnCompleteListener(OVROnCompleteListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVROnCompleteListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVROnCompleteListener(OVROnCompleteListener const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROnCompleteListener, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVROnCompleteListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROnCompleteListener*, "", "OVROnCompleteListener");
