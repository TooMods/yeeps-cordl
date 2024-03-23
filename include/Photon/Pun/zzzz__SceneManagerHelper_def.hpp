#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManagerHelper)
// Forward declare root types
namespace Photon::Pun {
class SceneManagerHelper;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::SceneManagerHelper);
// Type: Photon.Pun::SceneManagerHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::SceneManagerHelper*
class CORDL_TYPE SceneManagerHelper : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Pun::SceneManagerHelper* New_ctor();

  /// @brief Method .ctor, addr 0x2602c50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ActiveSceneBuildIndex, addr 0x2602be8, size 0x68, virtual false, abstract: false, final false
  static inline int32_t get_ActiveSceneBuildIndex();

  /// @brief Method get_ActiveSceneName, addr 0x2602b80, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW get_ActiveSceneName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneManagerHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneManagerHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneManagerHelper(SceneManagerHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneManagerHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneManagerHelper(SceneManagerHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::SceneManagerHelper, 0x10>, "Size mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::SceneManagerHelper);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::SceneManagerHelper*, "Photon.Pun", "SceneManagerHelper");
