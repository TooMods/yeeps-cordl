#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Playable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct Playable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::Playable);
// Type: UnityEngine.Playables::Playable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::UnityEngine.Playables::Playable
struct CORDL_TYPE Playable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable))::UnityEngine::Playables::Playable m_NullPlayable;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::Playable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Playables::Playable>*();

  /// @brief Method Equals, addr 0x29e193c, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Playables::Playable other);

  /// @brief Method GetHandle, addr 0x29e1930, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method .ctor, addr 0x29e1928, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  static inline ::UnityEngine::Playables::Playable getStaticF_m_NullPlayable();

  /// @brief Method get_Null, addr 0x29e1870, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable get_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::Playable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Playables::Playable>* i___System__IEquatable_1___UnityEngine__Playables__Playable_();

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Playables::Playable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Playable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr Playable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::Playable, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::Playable, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::Playable, "UnityEngine.Playables", "Playable");
