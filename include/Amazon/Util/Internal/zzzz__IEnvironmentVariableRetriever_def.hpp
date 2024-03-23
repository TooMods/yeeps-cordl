#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IEnvironmentVariableRetriever)
// Forward declare root types
namespace Amazon::Util::Internal {
class IEnvironmentVariableRetriever;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::IEnvironmentVariableRetriever);
// Type: Amazon.Util.Internal::IEnvironmentVariableRetriever
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::IEnvironmentVariableRetriever*
class CORDL_TYPE IEnvironmentVariableRetriever {
public:
  // Declarations
  /// @brief Method GetEnvironmentVariable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetEnvironmentVariable(::StringW key);

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentVariableRetriever", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnvironmentVariableRetriever(IEnvironmentVariableRetriever&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentVariableRetriever", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnvironmentVariableRetriever(IEnvironmentVariableRetriever const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::IEnvironmentVariableRetriever);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::IEnvironmentVariableRetriever*, "Amazon.Util.Internal", "IEnvironmentVariableRetriever");
