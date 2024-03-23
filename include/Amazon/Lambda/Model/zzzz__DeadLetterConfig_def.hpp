#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeadLetterConfig)
// Forward declare root types
namespace Amazon::Lambda::Model {
class DeadLetterConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::DeadLetterConfig);
// Type: Amazon.Lambda.Model::DeadLetterConfig
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::DeadLetterConfig*
class CORDL_TYPE DeadLetterConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TargetArn, put = set_TargetArn))::StringW TargetArn;

  /// @brief Field _targetArn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__targetArn, put = __cordl_internal_set__targetArn))::StringW _targetArn;

  /// @brief Method IsSetTargetArn, addr 0x2bc6c54, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTargetArn();

  static inline ::Amazon::Lambda::Model::DeadLetterConfig* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__targetArn() const;

  constexpr ::StringW& __cordl_internal_get__targetArn();

  constexpr void __cordl_internal_set__targetArn(::StringW value);

  /// @brief Method .ctor, addr 0x2bc6c64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TargetArn, addr 0x2bc6c44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetArn();

  /// @brief Method set_TargetArn, addr 0x2bc6c4c, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeadLetterConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeadLetterConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeadLetterConfig(DeadLetterConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeadLetterConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeadLetterConfig(DeadLetterConfig const&) = delete;

  /// @brief Field _targetArn, offset: 0x10, size: 0x8, def value: None
  ::StringW ____targetArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::DeadLetterConfig, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::DeadLetterConfig, ____targetArn) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::DeadLetterConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::DeadLetterConfig*, "Amazon.Lambda.Model", "DeadLetterConfig");
