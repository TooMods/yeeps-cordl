#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventBinding)
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings {
class IEventBinding;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Bindings::IEventBinding);
// Type: Unity.XR.CoreUtils.Bindings::IEventBinding
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Bindings {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Bindings::IEventBinding*
class CORDL_TYPE IEventBinding {
public:
  // Declarations
  __declspec(property(get = get_IsBound)) bool IsBound;

  /// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Bind();

  /// @brief Method ClearBinding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearBinding();

  /// @brief Method Unbind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Unbind();

  /// @brief Method get_IsBound, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsBound();

  // Ctor Parameters [CppParam { name: "", ty: "IEventBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventBinding(IEventBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventBinding(IEventBinding const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Bindings
NEED_NO_BOX(::Unity::XR::CoreUtils::Bindings::IEventBinding);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Bindings::IEventBinding*, "Unity.XR.CoreUtils.Bindings", "IEventBinding");
