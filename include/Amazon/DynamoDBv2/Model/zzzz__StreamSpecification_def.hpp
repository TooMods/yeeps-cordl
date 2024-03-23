#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StreamSpecification)
namespace Amazon::DynamoDBv2 {
class StreamViewType;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class StreamSpecification;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::StreamSpecification);
// Type: Amazon.DynamoDBv2.Model::StreamSpecification
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::StreamSpecification*
class CORDL_TYPE StreamSpecification : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_StreamEnabled, put = set_StreamEnabled)) bool StreamEnabled;

  __declspec(property(get = get_StreamViewType, put = set_StreamViewType))::Amazon::DynamoDBv2::StreamViewType* StreamViewType;

  /// @brief Field _streamEnabled, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__streamEnabled, put = __cordl_internal_set__streamEnabled))::System::Nullable_1<bool> _streamEnabled;

  /// @brief Field _streamViewType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__streamViewType, put = __cordl_internal_set__streamViewType))::Amazon::DynamoDBv2::StreamViewType* _streamViewType;

  /// @brief Method IsSetStreamEnabled, addr 0x1052244, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetStreamEnabled();

  /// @brief Method IsSetStreamViewType, addr 0x1052290, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStreamViewType();

  static inline ::Amazon::DynamoDBv2::Model::StreamSpecification* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__streamEnabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__streamEnabled();

  constexpr ::Amazon::DynamoDBv2::StreamViewType*& __cordl_internal_get__streamViewType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::StreamViewType*> const& __cordl_internal_get__streamViewType() const;

  constexpr void __cordl_internal_set__streamEnabled(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__streamViewType(::Amazon::DynamoDBv2::StreamViewType* value);

  /// @brief Method .ctor, addr 0x10522f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_StreamEnabled, addr 0x10521a0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_StreamEnabled();

  /// @brief Method get_StreamViewType, addr 0x1052280, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::StreamViewType* get_StreamViewType();

  /// @brief Method set_StreamEnabled, addr 0x10521dc, size 0x68, virtual false, abstract: false, final false
  inline void set_StreamEnabled(bool value);

  /// @brief Method set_StreamViewType, addr 0x1052288, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamViewType(::Amazon::DynamoDBv2::StreamViewType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamSpecification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamSpecification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamSpecification(StreamSpecification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamSpecification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamSpecification(StreamSpecification const&) = delete;

  /// @brief Field _streamEnabled, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____streamEnabled;

  /// @brief Field _streamViewType, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::StreamViewType* ____streamViewType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::StreamSpecification, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamSpecification, ____streamEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamSpecification, ____streamViewType) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::StreamSpecification);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::StreamSpecification*, "Amazon.DynamoDBv2.Model", "StreamSpecification");
