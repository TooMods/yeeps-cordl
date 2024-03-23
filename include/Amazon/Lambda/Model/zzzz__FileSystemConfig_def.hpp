#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemConfig)
// Forward declare root types
namespace Amazon::Lambda::Model {
class FileSystemConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::FileSystemConfig);
// Type: Amazon.Lambda.Model::FileSystemConfig
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::FileSystemConfig*
class CORDL_TYPE FileSystemConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Arn, put = set_Arn))::StringW Arn;

  __declspec(property(get = get_LocalMountPath, put = set_LocalMountPath))::StringW LocalMountPath;

  /// @brief Field _arn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__arn, put = __cordl_internal_set__arn))::StringW _arn;

  /// @brief Field _localMountPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localMountPath, put = __cordl_internal_set__localMountPath))::StringW _localMountPath;

  /// @brief Method IsSetArn, addr 0x2bc8cb8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetArn();

  /// @brief Method IsSetLocalMountPath, addr 0x2bc8cd8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLocalMountPath();

  static inline ::Amazon::Lambda::Model::FileSystemConfig* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__arn() const;

  constexpr ::StringW& __cordl_internal_get__arn();

  constexpr ::StringW const& __cordl_internal_get__localMountPath() const;

  constexpr ::StringW& __cordl_internal_get__localMountPath();

  constexpr void __cordl_internal_set__arn(::StringW value);

  constexpr void __cordl_internal_set__localMountPath(::StringW value);

  /// @brief Method .ctor, addr 0x2bc8ce8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Arn, addr 0x2bc8ca8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Arn();

  /// @brief Method get_LocalMountPath, addr 0x2bc8cc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalMountPath();

  /// @brief Method set_Arn, addr 0x2bc8cb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Arn(::StringW value);

  /// @brief Method set_LocalMountPath, addr 0x2bc8cd0, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalMountPath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemConfig(FileSystemConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemConfig(FileSystemConfig const&) = delete;

  /// @brief Field _arn, offset: 0x10, size: 0x8, def value: None
  ::StringW ____arn;

  /// @brief Field _localMountPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____localMountPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::FileSystemConfig, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::FileSystemConfig, ____arn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::FileSystemConfig, ____localMountPath) == 0x18, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::FileSystemConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::FileSystemConfig*, "Amazon.Lambda.Model", "FileSystemConfig");
