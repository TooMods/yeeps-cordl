#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariableRetriever)
namespace Amazon::Util::Internal {
class IEnvironmentVariableRetriever;
}
// Forward declare root types
namespace Amazon::Util::Internal {
class EnvironmentVariableRetriever;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::EnvironmentVariableRetriever);
// Type: Amazon.Util.Internal::EnvironmentVariableRetriever
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::EnvironmentVariableRetriever*
class CORDL_TYPE EnvironmentVariableRetriever : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Util::Internal::IEnvironmentVariableRetriever"
  constexpr operator ::Amazon::Util::Internal::IEnvironmentVariableRetriever*() noexcept;

  /// @brief Method GetEnvironmentVariable, addr 0x2210f80, size 0xc, virtual true, abstract: false, final true
  inline ::StringW GetEnvironmentVariable(::StringW key);

  static inline ::Amazon::Util::Internal::EnvironmentVariableRetriever* New_ctor();

  /// @brief Method .ctor, addr 0x2210f8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Amazon::Util::Internal::IEnvironmentVariableRetriever"
  constexpr ::Amazon::Util::Internal::IEnvironmentVariableRetriever* i___Amazon__Util__Internal__IEnvironmentVariableRetriever() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariableRetriever();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableRetriever", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariableRetriever(EnvironmentVariableRetriever&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableRetriever", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariableRetriever(EnvironmentVariableRetriever const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::EnvironmentVariableRetriever, 0x10>, "Size mismatch!");

} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::EnvironmentVariableRetriever);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::EnvironmentVariableRetriever*, "Amazon.Util.Internal", "EnvironmentVariableRetriever");
