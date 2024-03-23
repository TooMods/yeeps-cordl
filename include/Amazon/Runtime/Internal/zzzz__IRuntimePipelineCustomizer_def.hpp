#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IRuntimePipelineCustomizer)
namespace Amazon::Runtime::Internal {
class RuntimePipeline;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class IRuntimePipelineCustomizer;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer);
// Type: Amazon.Runtime.Internal::IRuntimePipelineCustomizer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::IRuntimePipelineCustomizer*
class CORDL_TYPE IRuntimePipelineCustomizer {
public:
  // Declarations
  __declspec(property(get = get_UniqueName))::StringW UniqueName;

  /// @brief Method Customize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Customize(::System::Type* type, ::Amazon::Runtime::Internal::RuntimePipeline* pipeline);

  /// @brief Method get_UniqueName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_UniqueName();

  // Ctor Parameters [CppParam { name: "", ty: "IRuntimePipelineCustomizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRuntimePipelineCustomizer(IRuntimePipelineCustomizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRuntimePipelineCustomizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRuntimePipelineCustomizer(IRuntimePipelineCustomizer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*, "Amazon.Runtime.Internal", "IRuntimePipelineCustomizer");
