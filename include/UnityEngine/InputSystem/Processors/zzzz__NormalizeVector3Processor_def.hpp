#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NormalizeVector3Processor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class NormalizeVector3Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::NormalizeVector3Processor);
// Type: UnityEngine.InputSystem.Processors::NormalizeVector3Processor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Processors::NormalizeVector3Processor*
class CORDL_TYPE NormalizeVector3Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Processors::NormalizeVector3Processor* New_ctor();

  /// @brief Method Process, addr 0x21dbf44, size 0xd0, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x21dc014, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x21dc054, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizeVector3Processor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NormalizeVector3Processor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalizeVector3Processor(NormalizeVector3Processor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalizeVector3Processor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalizeVector3Processor(NormalizeVector3Processor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::NormalizeVector3Processor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::NormalizeVector3Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::NormalizeVector3Processor*, "UnityEngine.InputSystem.Processors", "NormalizeVector3Processor");
