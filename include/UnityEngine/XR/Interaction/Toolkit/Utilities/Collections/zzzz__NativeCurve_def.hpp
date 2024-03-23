#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__WrapMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeCurve)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct WrapMode;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Collections {
struct NativeCurve;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Collections::NativeCurve
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Collections {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Collections::NativeCurve
struct CORDL_TYPE NativeCurve {
public:
  // Declarations
  __declspec(property(get = get_isCreated)) bool isCreated;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3023940, size 0x78, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Evaluate, addr 0x3023600, size 0x340, virtual false, abstract: false, final false
  inline float_t Evaluate(float_t t);

  /// @brief Method InitializeValues, addr 0x302345c, size 0xc0, virtual false, abstract: false, final false
  inline void InitializeValues(int32_t count, ::Unity::Collections::Allocator allocator);

  /// @brief Method PingPong, addr 0x3023adc, size 0x130, virtual false, abstract: false, final false
  inline float_t PingPong(float_t t, float_t length);

  /// @brief Method Repeat, addr 0x30239b8, size 0x124, virtual false, abstract: false, final false
  inline float_t Repeat(float_t t, float_t length);

  /// @brief Method Update, addr 0x302351c, size 0xe4, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::AnimationCurve* curve, int32_t resolution);

  /// @brief Method get_isCreated, addr 0x3023414, size 0x48, virtual false, abstract: false, final false
  inline bool get_isCreated();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeCurve();

  // Ctor Parameters [CppParam { name: "m_Values", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "m_PreWrapMode", ty:
  // "::UnityEngine::WrapMode", modifiers: "", def_value: None }, CppParam { name: "m_PostWrapMode", ty: "::UnityEngine::WrapMode", modifiers: "", def_value: None }]
  constexpr NativeCurve(::Unity::Collections::NativeArray_1<float_t> m_Values, ::UnityEngine::WrapMode m_PreWrapMode, ::UnityEngine::WrapMode m_PostWrapMode) noexcept;

  /// @brief Field m_Values, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> m_Values;

  /// @brief Field m_PreWrapMode, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::WrapMode m_PreWrapMode;

  /// @brief Field m_PostWrapMode, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::WrapMode m_PostWrapMode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve, m_Values) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve, m_PreWrapMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve, m_PostWrapMode) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Collections
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve, "UnityEngine.XR.Interaction.Toolkit.Utilities.Collections", "NativeCurve");
