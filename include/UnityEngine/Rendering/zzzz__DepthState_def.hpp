#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthState)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CompareFunction;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DepthState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DepthState);
// Type: UnityEngine.Rendering::DepthState
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::DepthState
struct CORDL_TYPE DepthState {
public:
  // Declarations
  __declspec(property(get = get_compareFunction))::UnityEngine::Rendering::CompareFunction compareFunction;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::DepthState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::DepthState>*();

  /// @brief Method Equals, addr 0x2a96b18, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a9691c, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::DepthState other);

  /// @brief Method GetHashCode, addr 0x2a96a60, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2a96a9c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool writeEnabled, ::UnityEngine::Rendering::CompareFunction compareFunction);

  /// @brief Method get_compareFunction, addr 0x2a96b10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CompareFunction get_compareFunction();

  /// @brief Method get_defaultValue, addr 0x2a967dc, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DepthState get_defaultValue();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::DepthState>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::DepthState>* i___System__IEquatable_1___UnityEngine__Rendering__DepthState_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthState();

  // Ctor Parameters [CppParam { name: "m_WriteEnabled", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_CompareFunction", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr DepthState(uint8_t m_WriteEnabled, int8_t m_CompareFunction) noexcept;

  /// @brief Field m_WriteEnabled, offset: 0x0, size: 0x1, def value: None
  uint8_t m_WriteEnabled;

  /// @brief Field m_CompareFunction, offset: 0x1, size: 0x1, def value: None
  int8_t m_CompareFunction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DepthState, 0x2>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DepthState, m_WriteEnabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DepthState, m_CompareFunction) == 0x1, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DepthState, "UnityEngine.Rendering", "DepthState");
