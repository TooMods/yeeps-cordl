#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LayerVersionContentInput)
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class LayerVersionContentInput;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::LayerVersionContentInput);
// Type: Amazon.Lambda.Model::LayerVersionContentInput
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::LayerVersionContentInput*
class CORDL_TYPE LayerVersionContentInput : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_S3Bucket, put = set_S3Bucket))::StringW S3Bucket;

  __declspec(property(get = get_S3Key, put = set_S3Key))::StringW S3Key;

  __declspec(property(get = get_S3ObjectVersion, put = set_S3ObjectVersion))::StringW S3ObjectVersion;

  __declspec(property(get = get_ZipFile, put = set_ZipFile))::System::IO::MemoryStream* ZipFile;

  /// @brief Field _s3Bucket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__s3Bucket, put = __cordl_internal_set__s3Bucket))::StringW _s3Bucket;

  /// @brief Field _s3Key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__s3Key, put = __cordl_internal_set__s3Key))::StringW _s3Key;

  /// @brief Field _s3ObjectVersion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__s3ObjectVersion, put = __cordl_internal_set__s3ObjectVersion))::StringW _s3ObjectVersion;

  /// @brief Field _zipFile, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__zipFile, put = __cordl_internal_set__zipFile))::System::IO::MemoryStream* _zipFile;

  /// @brief Method IsSetS3Bucket, addr 0x2bcce20, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3Bucket();

  /// @brief Method IsSetS3Key, addr 0x2bcce40, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3Key();

  /// @brief Method IsSetS3ObjectVersion, addr 0x2bcce60, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3ObjectVersion();

  /// @brief Method IsSetZipFile, addr 0x2bcce80, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetZipFile();

  static inline ::Amazon::Lambda::Model::LayerVersionContentInput* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__s3Bucket() const;

  constexpr ::StringW& __cordl_internal_get__s3Bucket();

  constexpr ::StringW const& __cordl_internal_get__s3Key() const;

  constexpr ::StringW& __cordl_internal_get__s3Key();

  constexpr ::StringW const& __cordl_internal_get__s3ObjectVersion() const;

  constexpr ::StringW& __cordl_internal_get__s3ObjectVersion();

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get__zipFile();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get__zipFile() const;

  constexpr void __cordl_internal_set__s3Bucket(::StringW value);

  constexpr void __cordl_internal_set__s3Key(::StringW value);

  constexpr void __cordl_internal_set__s3ObjectVersion(::StringW value);

  constexpr void __cordl_internal_set__zipFile(::System::IO::MemoryStream* value);

  /// @brief Method .ctor, addr 0x2bcce90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_S3Bucket, addr 0x2bcce10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3Bucket();

  /// @brief Method get_S3Key, addr 0x2bcce30, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3Key();

  /// @brief Method get_S3ObjectVersion, addr 0x2bcce50, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3ObjectVersion();

  /// @brief Method get_ZipFile, addr 0x2bcce70, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::MemoryStream* get_ZipFile();

  /// @brief Method set_S3Bucket, addr 0x2bcce18, size 0x8, virtual false, abstract: false, final false
  inline void set_S3Bucket(::StringW value);

  /// @brief Method set_S3Key, addr 0x2bcce38, size 0x8, virtual false, abstract: false, final false
  inline void set_S3Key(::StringW value);

  /// @brief Method set_S3ObjectVersion, addr 0x2bcce58, size 0x8, virtual false, abstract: false, final false
  inline void set_S3ObjectVersion(::StringW value);

  /// @brief Method set_ZipFile, addr 0x2bcce78, size 0x8, virtual false, abstract: false, final false
  inline void set_ZipFile(::System::IO::MemoryStream* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerVersionContentInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayerVersionContentInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayerVersionContentInput(LayerVersionContentInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayerVersionContentInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayerVersionContentInput(LayerVersionContentInput const&) = delete;

  /// @brief Field _s3Bucket, offset: 0x10, size: 0x8, def value: None
  ::StringW ____s3Bucket;

  /// @brief Field _s3Key, offset: 0x18, size: 0x8, def value: None
  ::StringW ____s3Key;

  /// @brief Field _s3ObjectVersion, offset: 0x20, size: 0x8, def value: None
  ::StringW ____s3ObjectVersion;

  /// @brief Field _zipFile, offset: 0x28, size: 0x8, def value: None
  ::System::IO::MemoryStream* ____zipFile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::LayerVersionContentInput, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentInput, ____s3Bucket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentInput, ____s3Key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentInput, ____s3ObjectVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentInput, ____zipFile) == 0x28, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::LayerVersionContentInput);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::LayerVersionContentInput*, "Amazon.Lambda.Model", "LayerVersionContentInput");
