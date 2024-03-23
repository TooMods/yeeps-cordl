#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoop)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystemInternal;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
class PlayerLoop;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LowLevel::PlayerLoop);
// Type: UnityEngine.LowLevel::PlayerLoop
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::LowLevel {
// Is value type: false
// CS Name: ::UnityEngine.LowLevel::PlayerLoop*
class CORDL_TYPE PlayerLoop : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCurrentPlayerLoop, addr 0x29e44d8, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevel::PlayerLoopSystem GetCurrentPlayerLoop();

  /// @brief Method GetCurrentPlayerLoopInternal, addr 0x29e454c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal, ::Array<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*> GetCurrentPlayerLoopInternal();

  /// @brief Method InternalToPlayerLoopSystem, addr 0x29e4574, size 0x200, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevel::PlayerLoopSystem
  InternalToPlayerLoopSystem(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal, ::Array<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*> internalSys, ByRef<int32_t> offset);

  /// @brief Method PlayerLoopSystemToInternal, addr 0x29e4858, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t PlayerLoopSystemToInternal(::UnityEngine::LowLevel::PlayerLoopSystem sys,
                                                   ByRef<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*> internalSys);

  /// @brief Method SetPlayerLoop, addr 0x29e4774, size 0xe4, virtual false, abstract: false, final false
  static inline void SetPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem loop);

  /// @brief Method SetPlayerLoopInternal, addr 0x29e49fc, size 0x3c, virtual false, abstract: false, final false
  static inline void SetPlayerLoopInternal(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal, ::Array<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*> loop);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLoop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerLoop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerLoop(PlayerLoop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLoop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerLoop(PlayerLoop const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::PlayerLoop, 0x10>, "Size mismatch!");

} // namespace UnityEngine::LowLevel
NEED_NO_BOX(::UnityEngine::LowLevel::PlayerLoop);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoop*, "UnityEngine.LowLevel", "PlayerLoop");
