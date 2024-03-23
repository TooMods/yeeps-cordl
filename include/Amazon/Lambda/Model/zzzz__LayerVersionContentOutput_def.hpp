#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerVersionContentOutput)
// Forward declare root types
namespace Amazon::Lambda::Model {
class LayerVersionContentOutput;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::LayerVersionContentOutput);
// Type: Amazon.Lambda.Model::LayerVersionContentOutput
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::LayerVersionContentOutput*
class CORDL_TYPE LayerVersionContentOutput : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CodeSha256, put = set_CodeSha256))::StringW CodeSha256;

  __declspec(property(get = get_CodeSize, put = set_CodeSize)) int64_t CodeSize;

  __declspec(property(get = get_Location, put = set_Location))::StringW Location;

  __declspec(property(get = get_SigningJobArn, put = set_SigningJobArn))::StringW SigningJobArn;

  __declspec(property(get = get_SigningProfileVersionArn, put = set_SigningProfileVersionArn))::StringW SigningProfileVersionArn;

  /// @brief Field _codeSha256, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSha256, put = __cordl_internal_set__codeSha256))::StringW _codeSha256;

  /// @brief Field _codeSize, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__codeSize, put = __cordl_internal_set__codeSize))::System::Nullable_1<int64_t> _codeSize;

  /// @brief Field _location, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__location, put = __cordl_internal_set__location))::StringW _location;

  /// @brief Field _signingJobArn, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__signingJobArn, put = __cordl_internal_set__signingJobArn))::StringW _signingJobArn;

  /// @brief Field _signingProfileVersionArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__signingProfileVersionArn, put = __cordl_internal_set__signingProfileVersionArn))::StringW _signingProfileVersionArn;

  /// @brief Method IsSetCodeSha256, addr 0x2bccea8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSha256();

  /// @brief Method IsSetCodeSize, addr 0x2bccf64, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCodeSize();

  /// @brief Method IsSetLocation, addr 0x2bccfb0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLocation();

  /// @brief Method IsSetSigningJobArn, addr 0x2bccfd0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSigningJobArn();

  /// @brief Method IsSetSigningProfileVersionArn, addr 0x2bccff0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSigningProfileVersionArn();

  static inline ::Amazon::Lambda::Model::LayerVersionContentOutput* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__codeSha256() const;

  constexpr ::StringW& __cordl_internal_get__codeSha256();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__codeSize() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__codeSize();

  constexpr ::StringW const& __cordl_internal_get__location() const;

  constexpr ::StringW& __cordl_internal_get__location();

  constexpr ::StringW const& __cordl_internal_get__signingJobArn() const;

  constexpr ::StringW& __cordl_internal_get__signingJobArn();

  constexpr ::StringW const& __cordl_internal_get__signingProfileVersionArn() const;

  constexpr ::StringW& __cordl_internal_get__signingProfileVersionArn();

  constexpr void __cordl_internal_set__codeSha256(::StringW value);

  constexpr void __cordl_internal_set__codeSize(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__location(::StringW value);

  constexpr void __cordl_internal_set__signingJobArn(::StringW value);

  constexpr void __cordl_internal_set__signingProfileVersionArn(::StringW value);

  /// @brief Method .ctor, addr 0x2bcd000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSha256, addr 0x2bcce98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSha256();

  /// @brief Method get_CodeSize, addr 0x2bcceb8, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_CodeSize();

  /// @brief Method get_Location, addr 0x2bccfa0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Location();

  /// @brief Method get_SigningJobArn, addr 0x2bccfc0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SigningJobArn();

  /// @brief Method get_SigningProfileVersionArn, addr 0x2bccfe0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SigningProfileVersionArn();

  /// @brief Method set_CodeSha256, addr 0x2bccea0, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSha256(::StringW value);

  /// @brief Method set_CodeSize, addr 0x2bccef4, size 0x70, virtual false, abstract: false, final false
  inline void set_CodeSize(int64_t value);

  /// @brief Method set_Location, addr 0x2bccfa8, size 0x8, virtual false, abstract: false, final false
  inline void set_Location(::StringW value);

  /// @brief Method set_SigningJobArn, addr 0x2bccfc8, size 0x8, virtual false, abstract: false, final false
  inline void set_SigningJobArn(::StringW value);

  /// @brief Method set_SigningProfileVersionArn, addr 0x2bccfe8, size 0x8, virtual false, abstract: false, final false
  inline void set_SigningProfileVersionArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerVersionContentOutput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayerVersionContentOutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayerVersionContentOutput(LayerVersionContentOutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayerVersionContentOutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayerVersionContentOutput(LayerVersionContentOutput const&) = delete;

  /// @brief Field _codeSha256, offset: 0x10, size: 0x8, def value: None
  ::StringW ____codeSha256;

  /// @brief Field _codeSize, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____codeSize;

  /// @brief Field _location, offset: 0x28, size: 0x8, def value: None
  ::StringW ____location;

  /// @brief Field _signingJobArn, offset: 0x30, size: 0x8, def value: None
  ::StringW ____signingJobArn;

  /// @brief Field _signingProfileVersionArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____signingProfileVersionArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::LayerVersionContentOutput, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentOutput, ____codeSha256) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentOutput, ____codeSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentOutput, ____location) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentOutput, ____signingJobArn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LayerVersionContentOutput, ____signingProfileVersionArn) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::LayerVersionContentOutput);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::LayerVersionContentOutput*, "Amazon.Lambda.Model", "LayerVersionContentOutput");
