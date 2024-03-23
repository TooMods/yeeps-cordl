#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__InternalConfiguration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileInternalConfiguration)
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ProfileInternalConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ProfileInternalConfiguration);
// Type: Amazon.Runtime.Internal::ProfileInternalConfiguration
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ProfileInternalConfiguration*
class CORDL_TYPE ProfileInternalConfiguration : public ::Amazon::Runtime::Internal::InternalConfiguration {
public:
  // Declarations
  /// @brief Field _logger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  static inline ::Amazon::Runtime::Internal::ProfileInternalConfiguration* New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source);

  static inline ::Amazon::Runtime::Internal::ProfileInternalConfiguration* New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

  /// @brief Method Setup, addr 0x23d80bc, size 0x48c, virtual false, abstract: false, final false
  inline void Setup(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x23d7fa4, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source);

  /// @brief Method .ctor, addr 0x23d8548, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfileInternalConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfileInternalConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfileInternalConfiguration(ProfileInternalConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfileInternalConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfileInternalConfiguration(ProfileInternalConfiguration const&) = delete;

  /// @brief Field _logger, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ProfileInternalConfiguration, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ProfileInternalConfiguration, ____logger) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ProfileInternalConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ProfileInternalConfiguration*, "Amazon.Runtime.Internal", "ProfileInternalConfiguration");
