#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScalableBufferManager)
// Forward declare root types
namespace UnityEngine {
class ScalableBufferManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ScalableBufferManager);
// Type: UnityEngine::ScalableBufferManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ScalableBufferManager*
class CORDL_TYPE ScalableBufferManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method ResizeBuffers, addr 0x27fa290, size 0x40, virtual false, abstract: false, final false
  static inline void ResizeBuffers(float_t widthScale, float_t heightScale);

  /// @brief Method get_heightScaleFactor, addr 0x27fa268, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_heightScaleFactor();

  /// @brief Method get_widthScaleFactor, addr 0x27fa240, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_widthScaleFactor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScalableBufferManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScalableBufferManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScalableBufferManager(ScalableBufferManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScalableBufferManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScalableBufferManager(ScalableBufferManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScalableBufferManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ScalableBufferManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScalableBufferManager*, "UnityEngine", "ScalableBufferManager");
