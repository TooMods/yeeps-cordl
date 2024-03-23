#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TableAlias)
// Forward declare root types
namespace Amazon::Util {
class TableAlias;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::TableAlias);
// Type: Amazon.Util::TableAlias
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::TableAlias*
class CORDL_TYPE TableAlias : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FromTable, put = set_FromTable))::StringW FromTable;

  __declspec(property(get = get_ToTable, put = set_ToTable))::StringW ToTable;

  /// @brief Field <FromTable>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__FromTable_k__BackingField, put = __cordl_internal_set__FromTable_k__BackingField))::StringW _FromTable_k__BackingField;

  /// @brief Field <ToTable>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ToTable_k__BackingField, put = __cordl_internal_set__ToTable_k__BackingField))::StringW _ToTable_k__BackingField;

  static inline ::Amazon::Util::TableAlias* New_ctor();

  static inline ::Amazon::Util::TableAlias* New_ctor(::StringW fromTable, ::StringW toTable);

  constexpr ::StringW const& __cordl_internal_get__FromTable_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FromTable_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ToTable_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ToTable_k__BackingField();

  constexpr void __cordl_internal_set__FromTable_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ToTable_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1207ec8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1207ed0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW fromTable, ::StringW toTable);

  /// @brief Method get_FromTable, addr 0x1207ea8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FromTable();

  /// @brief Method get_ToTable, addr 0x1207eb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ToTable();

  /// @brief Method set_FromTable, addr 0x1207eb0, size 0x8, virtual false, abstract: false, final false
  inline void set_FromTable(::StringW value);

  /// @brief Method set_ToTable, addr 0x1207ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_ToTable(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableAlias();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableAlias", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableAlias(TableAlias&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableAlias", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableAlias(TableAlias const&) = delete;

  /// @brief Field <FromTable>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____FromTable_k__BackingField;

  /// @brief Field <ToTable>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ToTable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::TableAlias, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::TableAlias, ____FromTable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::TableAlias, ____ToTable_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::TableAlias);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::TableAlias*, "Amazon.Util", "TableAlias");
