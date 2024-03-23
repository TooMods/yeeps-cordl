#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FallbackComposite_1)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
template <typename TValue> struct __FallbackComposite_1__QuaternionCompositeComparer;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
template <typename TValue> class FallbackComposite_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
template <typename TValue> struct __FallbackComposite_1__QuaternionCompositeComparer;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1);
MARK_GEN_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::__FallbackComposite_1__QuaternionCompositeComparer);
// Type: ::QuaternionCompositeComparer
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
// cpp template
template <typename TValue>
// Is value type: true
// CS Name: ::FallbackComposite`1::QuaternionCompositeComparer<TValue>
#pragma pack(push, 0)
struct CORDL_TYPE __FallbackComposite_1__QuaternionCompositeComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>*();

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::Quaternion x, ::UnityEngine::Quaternion y);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>* i___System__Collections__Generic__IComparer_1___UnityEngine__Quaternion_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FallbackComposite_1__QuaternionCompositeComparer();

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites::FallbackComposite`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Composites::FallbackComposite`1<TValue>*
class CORDL_TYPE FallbackComposite_1 : public ::UnityEngine::InputSystem::InputBindingComposite_1<TValue> {
public:
  // Declarations
  using QuaternionCompositeComparer = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::__FallbackComposite_1__QuaternionCompositeComparer<TValue>;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FallbackComposite_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FallbackComposite_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FallbackComposite_1(FallbackComposite_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FallbackComposite_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FallbackComposite_1(FallbackComposite_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1, "UnityEngine.XR.Interaction.Toolkit.Inputs.Composites", "FallbackComposite`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::__FallbackComposite_1__QuaternionCompositeComparer,
                                      "UnityEngine.XR.Interaction.Toolkit.Inputs.Composites", "FallbackComposite`1/QuaternionCompositeComparer");
