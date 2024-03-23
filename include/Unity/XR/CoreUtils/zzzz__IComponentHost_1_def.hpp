#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IComponentHost_1)
// Forward declare root types
namespace Unity::XR::CoreUtils {
template <typename THostType> class IComponentHost_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::IComponentHost_1);
// Type: Unity.XR.CoreUtils::IComponentHost`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// cpp template
template <typename THostType>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::IComponentHost`1<THostType>*
class CORDL_TYPE IComponentHost_1 {
public:
  // Declarations
  __declspec(property(get = get_HostedComponents))::ArrayW<THostType, ::Array<THostType>*> HostedComponents;

  /// @brief Method get_HostedComponents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<THostType, ::Array<THostType>*> get_HostedComponents();

  // Ctor Parameters [CppParam { name: "", ty: "IComponentHost_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IComponentHost_1(IComponentHost_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IComponentHost_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponentHost_1(IComponentHost_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::IComponentHost_1, "Unity.XR.CoreUtils", "IComponentHost`1");
