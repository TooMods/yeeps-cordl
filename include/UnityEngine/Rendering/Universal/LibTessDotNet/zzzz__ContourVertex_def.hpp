#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ContourVertex)
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct Vec3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct ContourVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex);
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::ContourVertex
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::ContourVertex
struct CORDL_TYPE ContourVertex {
public:
  // Declarations
  /// @brief Method ToString, addr 0x2ad3620, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContourVertex();

  // Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3", modifiers: "", def_value: None }, CppParam { name: "Data", ty: "::System::Object*",
  // modifiers: "", def_value: None }]
  constexpr ContourVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 Position, ::System::Object* Data) noexcept;

  /// @brief Field Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 Position;

  /// @brief Field Data, offset: 0x10, size: 0x8, def value: None
  ::System::Object* Data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, Data) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, "UnityEngine.Rendering.Universal.LibTessDotNet", "ContourVertex");
