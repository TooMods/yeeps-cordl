#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableBase_1_def.hpp"
CORDL_MODULE_EXPORT(BindableEnum_1)
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableEnum_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1);
// Type: Unity.XR.CoreUtils.Bindings.Variables::BindableEnum`1
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Bindings::Variables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Bindings.Variables::BindableEnum`1<T>*
class CORDL_TYPE BindableEnum_1 : public ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<T>* New_ctor(T initialValue, bool checkEquality, ::System::Func_3<T, T, bool>* equalityMethod, bool startInitialized);

  /// @brief Method ValueEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ValueEquals(T other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T initialValue, bool checkEquality, ::System::Func_3<T, T, bool>* equalityMethod, bool startInitialized);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableEnum_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindableEnum_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindableEnum_1(BindableEnum_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindableEnum_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindableEnum_1(BindableEnum_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Bindings::Variables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1, "Unity.XR.CoreUtils.Bindings.Variables", "BindableEnum`1");
