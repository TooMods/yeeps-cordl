#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Layer)
// Forward declare root types
namespace Amazon::Lambda::Model {
class Layer;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Layer);
// Type: Amazon.Lambda.Model::Layer
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::Layer*
class CORDL_TYPE Layer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Arn, put = set_Arn))::StringW Arn;

  __declspec(property(get = get_CodeSize, put = set_CodeSize)) int64_t CodeSize;

  __declspec(property(get = get_SigningJobArn, put = set_SigningJobArn))::StringW SigningJobArn;

  __declspec(property(get = get_SigningProfileVersionArn, put = set_SigningProfileVersionArn))::StringW SigningProfileVersionArn;

  /// @brief Field _arn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__arn, put = __cordl_internal_set__arn))::StringW _arn;

  /// @brief Field _codeSize, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__codeSize, put = __cordl_internal_set__codeSize))::System::Nullable_1<int64_t> _codeSize;

  /// @brief Field _signingJobArn, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__signingJobArn, put = __cordl_internal_set__signingJobArn))::StringW _signingJobArn;

  /// @brief Field _signingProfileVersionArn, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__signingProfileVersionArn, put = __cordl_internal_set__signingProfileVersionArn))::StringW _signingProfileVersionArn;

  /// @brief Method IsSetArn, addr 0x2bccc68, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetArn();

  /// @brief Method IsSetCodeSize, addr 0x2bccd24, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCodeSize();

  /// @brief Method IsSetSigningJobArn, addr 0x2bccd70, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSigningJobArn();

  /// @brief Method IsSetSigningProfileVersionArn, addr 0x2bccd90, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSigningProfileVersionArn();

  static inline ::Amazon::Lambda::Model::Layer* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__arn() const;

  constexpr ::StringW& __cordl_internal_get__arn();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__codeSize() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__codeSize();

  constexpr ::StringW const& __cordl_internal_get__signingJobArn() const;

  constexpr ::StringW& __cordl_internal_get__signingJobArn();

  constexpr ::StringW const& __cordl_internal_get__signingProfileVersionArn() const;

  constexpr ::StringW& __cordl_internal_get__signingProfileVersionArn();

  constexpr void __cordl_internal_set__arn(::StringW value);

  constexpr void __cordl_internal_set__codeSize(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__signingJobArn(::StringW value);

  constexpr void __cordl_internal_set__signingProfileVersionArn(::StringW value);

  /// @brief Method .ctor, addr 0x2bccda0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Arn, addr 0x2bccc58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Arn();

  /// @brief Method get_CodeSize, addr 0x2bccc78, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_CodeSize();

  /// @brief Method get_SigningJobArn, addr 0x2bccd60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SigningJobArn();

  /// @brief Method get_SigningProfileVersionArn, addr 0x2bccd80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SigningProfileVersionArn();

  /// @brief Method set_Arn, addr 0x2bccc60, size 0x8, virtual false, abstract: false, final false
  inline void set_Arn(::StringW value);

  /// @brief Method set_CodeSize, addr 0x2bcccb4, size 0x70, virtual false, abstract: false, final false
  inline void set_CodeSize(int64_t value);

  /// @brief Method set_SigningJobArn, addr 0x2bccd68, size 0x8, virtual false, abstract: false, final false
  inline void set_SigningJobArn(::StringW value);

  /// @brief Method set_SigningProfileVersionArn, addr 0x2bccd88, size 0x8, virtual false, abstract: false, final false
  inline void set_SigningProfileVersionArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Layer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Layer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Layer(Layer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Layer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Layer(Layer const&) = delete;

  /// @brief Field _arn, offset: 0x10, size: 0x8, def value: None
  ::StringW ____arn;

  /// @brief Field _codeSize, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____codeSize;

  /// @brief Field _signingJobArn, offset: 0x28, size: 0x8, def value: None
  ::StringW ____signingJobArn;

  /// @brief Field _signingProfileVersionArn, offset: 0x30, size: 0x8, def value: None
  ::StringW ____signingProfileVersionArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Layer, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::Layer, ____arn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::Layer, ____codeSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::Layer, ____signingJobArn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::Layer, ____signingProfileVersionArn) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::Layer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Layer*, "Amazon.Lambda.Model", "Layer");
