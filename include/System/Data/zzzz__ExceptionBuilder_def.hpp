#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionBuilder)
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class Constraint;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataRowState;
}
namespace System::Data {
struct DataSetDateTime;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class ForeignKeyConstraint;
}
namespace System::Data {
struct RBTreeError;
}
namespace System::Data {
struct SerializationFormat;
}
namespace System::Data {
class UniqueConstraint;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ExceptionBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ExceptionBuilder);
// Type: System.Data::ExceptionBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ExceptionBuilder*
class CORDL_TYPE ExceptionBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddExternalObject, addr 0x24174ac, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* AddExternalObject();

  /// @brief Method AddNewNotAllowNull, addr 0x241731c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* AddNewNotAllowNull();

  /// @brief Method AddPrimaryKeyConstraint, addr 0x24078dc, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* AddPrimaryKeyConstraint();

  /// @brief Method AggregateException, addr 0x2418ff8, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Exception* AggregateException(::System::Data::AggregateType aggregateType, ::System::Type* type);

  /// @brief Method ArgumentContainsNull, addr 0x241677c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentContainsNull(::StringW paramName);

  /// @brief Method ArgumentNull, addr 0x240759c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentNull(::StringW paramName);

  /// @brief Method ArgumentOutOfRange, addr 0x2416728, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentOutOfRange(::StringW paramName);

  /// @brief Method AttributeValues, addr 0x24194d8, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* AttributeValues(::StringW name, ::StringW value1, ::StringW value2);

  /// @brief Method AutoIncrementAndDefaultValue, addr 0x240b7e0, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* AutoIncrementAndDefaultValue();

  /// @brief Method AutoIncrementAndExpression, addr 0x240b7a0, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* AutoIncrementAndExpression();

  /// @brief Method AutoIncrementCannotSetIfHasData, addr 0x240bb0c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* AutoIncrementCannotSetIfHasData(::StringW typeName);

  /// @brief Method AutoIncrementSeed, addr 0x2411a80, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* AutoIncrementSeed();

  /// @brief Method BadObjectPropertyAccess, addr 0x2406c5c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* BadObjectPropertyAccess(::StringW error);

  /// @brief Method BeginEditInRowChanging, addr 0x2417cd8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* BeginEditInRowChanging();

  /// @brief Method CanNotBindTable, addr 0x241725c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotBindTable();

  /// @brief Method CanNotClear, addr 0x24174ec, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotClear();

  /// @brief Method CanNotDelete, addr 0x24173dc, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotDelete();

  /// @brief Method CanNotDeserializeObjectType, addr 0x2419b04, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotDeserializeObjectType();

  /// @brief Method CanNotRemoteDataTable, addr 0x2418eec, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotRemoteDataTable();

  /// @brief Method CanNotSerializeDataTableHierarchy, addr 0x2418eac, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotSerializeDataTableHierarchy();

  /// @brief Method CanNotSerializeDataTableWithEmptyName, addr 0x2418f6c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotSerializeDataTableWithEmptyName();

  /// @brief Method CanNotSetRemotingFormat, addr 0x2418f2c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotSetRemotingFormat();

  /// @brief Method CanNotSetTable, addr 0x24171dc, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotSetTable();

  /// @brief Method CanNotUse, addr 0x241721c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotUse();

  /// @brief Method CanNotUseDataViewManager, addr 0x241719c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CanNotUseDataViewManager();

  /// @brief Method CancelEditInRowChanging, addr 0x2417d18, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CancelEditInRowChanging();

  /// @brief Method CannotAddColumn1, addr 0x2413724, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddColumn1(::StringW column);

  /// @brief Method CannotAddColumn2, addr 0x2413770, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddColumn2(::StringW column);

  /// @brief Method CannotAddColumn3, addr 0x240fd38, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddColumn3();

  /// @brief Method CannotAddColumn4, addr 0x240fd78, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddColumn4(::StringW column);

  /// @brief Method CannotAddDuplicate, addr 0x24148c4, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddDuplicate(::StringW column);

  /// @brief Method CannotAddDuplicate2, addr 0x241495c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddDuplicate2(::StringW table);

  /// @brief Method CannotAddDuplicate3, addr 0x2414910, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAddDuplicate3(::StringW table);

  /// @brief Method CannotChangeCaseLocale, addr 0x2418974, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotChangeCaseLocale();

  /// @brief Method CannotChangeCaseLocale, addr 0x241897c, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotChangeCaseLocale(::System::Exception* innerException);

  /// @brief Method CannotChangeNamespace, addr 0x240eeb0, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotChangeNamespace(::StringW columnName);

  /// @brief Method CannotConvert, addr 0x2419a24, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotConvert(::StringW name, ::StringW type);

  /// @brief Method CannotInstantiateAbstract, addr 0x2419868, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotInstantiateAbstract(::StringW name);

  /// @brief Method CannotModifyCollection, addr 0x24167cc, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotModifyCollection();

  /// @brief Method CannotRemoveChildKey, addr 0x241412c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemoveChildKey(::StringW relation);

  /// @brief Method CannotRemoveColumn, addr 0x24140ac, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemoveColumn();

  /// @brief Method CannotRemoveConstraint, addr 0x2414178, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemoveConstraint(::StringW constraint, ::StringW table);

  /// @brief Method CannotRemoveExpression, addr 0x24141d4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemoveExpression(::StringW column, ::StringW expression);

  /// @brief Method CannotRemovePrimaryKey, addr 0x24140ec, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotRemovePrimaryKey();

  /// @brief Method CannotSetDateTimeModeForNonDateTimeColumns, addr 0x240dcc4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetDateTimeModeForNonDateTimeColumns();

  /// @brief Method CannotSetMaxLength, addr 0x240ec64, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetMaxLength(::System::Data::DataColumn* column, int32_t value);

  /// @brief Method CannotSetMaxLength2, addr 0x240e83c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetMaxLength2(::System::Data::DataColumn* column);

  /// @brief Method CannotSetSimpleContent, addr 0x240fcdc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetSimpleContent(::StringW columnName, ::System::Type* type);

  /// @brief Method CannotSetSimpleContentType, addr 0x240db34, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetSimpleContentType(::StringW columnName, ::System::Type* type);

  /// @brief Method CannotSetToNull, addr 0x2416f6c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotSetToNull(::System::Data::DataColumn* column);

  /// @brief Method CantAddConstraintToMultipleNestedTable, addr 0x2407890, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CantAddConstraintToMultipleNestedTable(::StringW tableName);

  /// @brief Method CantChangeDataType, addr 0x240d444, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CantChangeDataType();

  /// @brief Method CantChangeDateTimeMode, addr 0x240dd04, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Exception* CantChangeDateTimeMode(::System::Data::DataSetDateTime oldValue, ::System::Data::DataSetDateTime newValue);

  /// @brief Method CaseInsensitiveNameConflict, addr 0x240719c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CaseInsensitiveNameConflict(::StringW name);

  /// @brief Method CaseLocaleMismatch, addr 0x2418934, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CaseLocaleMismatch();

  /// @brief Method ChildTableMismatch, addr 0x24188b4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ChildTableMismatch();

  /// @brief Method CircularComplexType, addr 0x241981c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* CircularComplexType(::StringW name);

  /// @brief Method ColumnNameRequired, addr 0x240cd50, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnNameRequired();

  /// @brief Method ColumnNotInAnyTable, addr 0x24168f4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnNotInAnyTable();

  /// @brief Method ColumnNotInTheTable, addr 0x2416898, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnNotInTheTable(::StringW column, ::StringW table);

  /// @brief Method ColumnOutOfRange, addr 0x2416934, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnOutOfRange(::StringW column);

  /// @brief Method ColumnOutOfRange, addr 0x2412804, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnOutOfRange(int32_t index);

  /// @brief Method ColumnToSortIsOutOfRange, addr 0x24175ac, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnToSortIsOutOfRange(::StringW column);

  /// @brief Method ColumnTypeConflict, addr 0x24199d8, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnTypeConflict(::StringW name);

  /// @brief Method ColumnTypeNotSupported, addr 0x240a69c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnTypeNotSupported();

  /// @brief Method ColumnsTypeMismatch, addr 0x240d608, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ColumnsTypeMismatch();

  /// @brief Method ConstraintAddFailed, addr 0x2416cac, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintAddFailed(::System::Data::DataTable* table);

  /// @brief Method ConstraintForeignTable, addr 0x2407d50, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintForeignTable();

  /// @brief Method ConstraintOutOfRange, addr 0x2406ec0, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintOutOfRange(int32_t index);

  /// @brief Method ConstraintParentValues, addr 0x2407dd0, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintParentValues();

  /// @brief Method ConstraintRemoveFailed, addr 0x2408340, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintRemoveFailed();

  /// @brief Method ConstraintViolation, addr 0x2416c14, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintViolation(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns,
                                                         ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method ConstraintViolation, addr 0x2406b1c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* ConstraintViolation(::StringW constraint);

  /// @brief Method ConvertFailed, addr 0x2419dd8, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Exception* ConvertFailed(::System::Type* type1, ::System::Type* type2);

  /// @brief Method CreateChildView, addr 0x241739c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateChildView();

  /// @brief Method DataSetUnsupportedSchema, addr 0x24182e8, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DataSetUnsupportedSchema(::StringW ns);

  /// @brief Method DataTableInferenceNotSupported, addr 0x2419ca8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* DataTableInferenceNotSupported();

  /// @brief Method DatasetConflictingName, addr 0x2418c4c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DatasetConflictingName(::StringW table);

  /// @brief Method DatatypeNotDefined, addr 0x2419704, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* DatatypeNotDefined();

  /// @brief Method DefaultValueAndAutoIncrement, addr 0x240de04, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* DefaultValueAndAutoIncrement();

  /// @brief Method DefaultValueColumnDataType, addr 0x240de44, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Exception* DefaultValueColumnDataType(::StringW column, ::System::Type* defaultType, ::System::Type* columnType, ::System::Exception* inner);

  /// @brief Method DefaultValueDataType, addr 0x240da5c, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* DefaultValueDataType(::StringW column, ::System::Type* defaultType, ::System::Type* columnType, ::System::Exception* inner);

  /// @brief Method DeleteInRowDeleting, addr 0x2417d58, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* DeleteInRowDeleting();

  /// @brief Method DeletedRowInaccessible, addr 0x2417ed8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* DeletedRowInaccessible();

  /// @brief Method DiffgramMissingSQL, addr 0x241994c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* DiffgramMissingSQL();

  /// @brief Method DiffgramMissingTable, addr 0x2419900, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DiffgramMissingTable(::StringW name);

  /// @brief Method DuplicateConstraint, addr 0x2407774, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateConstraint(::StringW constraint);

  /// @brief Method DuplicateConstraintName, addr 0x2408b84, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateConstraintName(::StringW constraint);

  /// @brief Method DuplicateConstraintRead, addr 0x241998c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateConstraintRead(::StringW str);

  /// @brief Method DuplicateDeclaration, addr 0x2419d48, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateDeclaration(::StringW name);

  /// @brief Method DuplicateRelation, addr 0x2418768, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateRelation(::StringW relation);

  /// @brief Method DuplicateTableName, addr 0x2418b58, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateTableName(::StringW table);

  /// @brief Method DuplicateTableName2, addr 0x2418ba4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateTableName2(::StringW table, ::StringW ns);

  /// @brief Method EditInRowChanging, addr 0x2417c58, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* EditInRowChanging();

  /// @brief Method ElementTypeNotFound, addr 0x241953c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* ElementTypeNotFound(::StringW name);

  /// @brief Method EndEditInRowChanging, addr 0x2417c98, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* EndEditInRowChanging();

  /// @brief Method EnforceConstraint, addr 0x24188f4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* EnforceConstraint();

  /// @brief Method EnumeratorModified, addr 0x2419f44, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* EnumeratorModified();

  /// @brief Method ExpressionAndConstraint, addr 0x240dfb4, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionAndConstraint(::System::Data::DataColumn* column, ::System::Data::Constraint* constraint);

  /// @brief Method ExpressionAndReadOnly, addr 0x240e16c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionAndReadOnly();

  /// @brief Method ExpressionAndUnique, addr 0x240df74, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionAndUnique();

  /// @brief Method ExpressionCircular, addr 0x240e1ac, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionCircular();

  /// @brief Method ExpressionInConstraint, addr 0x2416ecc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionInConstraint(::System::Data::DataColumn* column);

  /// @brief Method FailedCascadeDelete, addr 0x2416d00, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* FailedCascadeDelete(::StringW constraint);

  /// @brief Method FailedCascadeUpdate, addr 0x2416d4c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* FailedCascadeUpdate(::StringW constraint);

  /// @brief Method FailedClearParentTable, addr 0x2416d98, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* FailedClearParentTable(::StringW table, ::StringW constraint, ::StringW childTable);

  /// @brief Method ForeignKeyViolation, addr 0x2416dfc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* ForeignKeyViolation(::StringW constraint, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys);

  /// @brief Method ForeignRelation, addr 0x2417814, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ForeignRelation();

  /// @brief Method FoundEntity, addr 0x2419d94, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* FoundEntity();

  /// @brief Method GetElementIndex, addr 0x241741c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Exception* GetElementIndex(int32_t index);

  /// @brief Method GetParentRowTableMismatch, addr 0x24178f0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* GetParentRowTableMismatch(::StringW t1, ::StringW t2);

  /// @brief Method HasToBeStringType, addr 0x240e890, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* HasToBeStringType(::System::Data::DataColumn* column);

  /// @brief Method IComparableNotImplemented, addr 0x241700c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* IComparableNotImplemented(::StringW typeName);

  /// @brief Method INullableUDTwithoutStaticNull, addr 0x2416fc0, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* INullableUDTwithoutStaticNull(::StringW typeName);

  /// @brief Method InValidNestedRelation, addr 0x2417b40, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InValidNestedRelation(::StringW childTableName);

  /// @brief Method IndexKeyLength, addr 0x24184c0, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Exception* IndexKeyLength(int32_t length, int32_t keyLength);

  /// @brief Method InsertExternalObject, addr 0x241752c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* InsertExternalObject();

  /// @brief Method InternalRBTreeError, addr 0x2419ec4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Exception* InternalRBTreeError(::System::Data::RBTreeError internalError);

  /// @brief Method InvalidAttributeValue, addr 0x241947c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidAttributeValue(::StringW name, ::StringW value);

  /// @brief Method InvalidDataColumnMapping, addr 0x24170a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidDataColumnMapping(::System::Type* type);

  /// @brief Method InvalidDateTimeMode, addr 0x240ddbc, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidDateTimeMode(::System::Data::DataSetDateTime mode);

  /// @brief Method InvalidDuplicateNamedSimpleTypeDelaration, addr 0x2419e68, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidDuplicateNamedSimpleTypeDelaration(::StringW stName, ::StringW errorStr);

  /// @brief Method InvalidField, addr 0x2419784, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidField(::StringW name);

  /// @brief Method InvalidKey, addr 0x24198b4, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidKey(::StringW name);

  /// @brief Method InvalidOffsetLength, addr 0x2416858, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidOffsetLength();

  /// @brief Method InvalidParentNamespaceinNestedRelation, addr 0x2417b8c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidParentNamespaceinNestedRelation(::StringW childTableName);

  /// @brief Method InvalidPrefix, addr 0x240d2b4, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidPrefix(::StringW name);

  /// @brief Method InvalidRemotingFormat, addr 0x24189c4, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidRemotingFormat(::System::Data::SerializationFormat mode);

  /// @brief Method InvalidRowBitPattern, addr 0x241821c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidRowBitPattern();

  /// @brief Method InvalidRowState, addr 0x24181d4, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidRowState(::System::Data::DataRowState state);

  /// @brief Method InvalidRowVersion, addr 0x2417f98, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidRowVersion();

  /// @brief Method InvalidSelector, addr 0x24197d0, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidSelector(::StringW name);

  /// @brief Method InvalidSortString, addr 0x2418b0c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidSortString(::StringW sort);

  /// @brief Method InvalidStorageType, addr 0x24190b0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidStorageType(::System::TypeCode typecode);

  /// @brief Method IsDataSetAttributeMissingInSchema, addr 0x2419b44, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* IsDataSetAttributeMissingInSchema();

  /// @brief Method KeyColumnsIdentical, addr 0x2417854, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyColumnsIdentical();

  /// @brief Method KeyDuplicateColumns, addr 0x2417708, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyDuplicateColumns(::StringW columnName);

  /// @brief Method KeyLengthMismatch, addr 0x2417794, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyLengthMismatch();

  /// @brief Method KeyLengthZero, addr 0x24177d4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyLengthZero();

  /// @brief Method KeyNoColumns, addr 0x2417638, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyNoColumns();

  /// @brief Method KeyTableMismatch, addr 0x24175f8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyTableMismatch();

  /// @brief Method KeyTooManyColumns, addr 0x2417678, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyTooManyColumns(int32_t cols);

  /// @brief Method KeysToString, addr 0x2416980, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW KeysToString(::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys);

  /// @brief Method LongerThanMaxLength, addr 0x240ff2c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* LongerThanMaxLength(::System::Data::DataColumn* column);

  /// @brief Method LoopInNestedRelations, addr 0x2417a74, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* LoopInNestedRelations(::StringW tableName);

  /// @brief Method MaxLengthViolationText, addr 0x2411124, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW MaxLengthViolationText(::StringW columnName);

  /// @brief Method MergeFailed, addr 0x2419dd4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Exception* MergeFailed(::StringW name);

  /// @brief Method MergeMissingDefinition, addr 0x2418334, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* MergeMissingDefinition(::StringW obj);

  /// @brief Method MismatchKeyLength, addr 0x2419744, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* MismatchKeyLength();

  /// @brief Method MissingAttribute, addr 0x24193d0, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingAttribute(::StringW attribute);

  /// @brief Method MissingAttribute, addr 0x2419420, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingAttribute(::StringW element, ::StringW attribute);

  /// @brief Method MissingRefer, addr 0x2419a80, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingRefer(::StringW name);

  /// @brief Method MultipleParentRows, addr 0x2419c10, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* MultipleParentRows(::StringW tableQName);

  /// @brief Method MultipleParents, addr 0x2418194, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* MultipleParents();

  /// @brief Method MultipleTextOnlyColumns, addr 0x2418acc, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* MultipleTextOnlyColumns();

  /// @brief Method NamespaceNameConflict, addr 0x241680c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* NamespaceNameConflict(::StringW name);

  /// @brief Method NeededForForeignKeyConstraint, addr 0x2416c24, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Exception* NeededForForeignKeyConstraint(::System::Data::UniqueConstraint* key, ::System::Data::ForeignKeyConstraint* fk);

  /// @brief Method NegativeMinimumCapacity, addr 0x2419234, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NegativeMinimumCapacity();

  /// @brief Method NestedCircular, addr 0x2419bc4, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* NestedCircular(::StringW name);

  /// @brief Method NoConstraintName, addr 0x24066e0, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NoConstraintName();

  /// @brief Method NoCurrentData, addr 0x2417dd8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NoCurrentData();

  /// @brief Method NoOriginalData, addr 0x2417e18, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NoOriginalData();

  /// @brief Method NoProposedData, addr 0x2417e58, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NoProposedData();

  /// @brief Method NoTableName, addr 0x2418a8c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NoTableName();

  /// @brief Method NonUniqueValues, addr 0x2410018, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* NonUniqueValues(::StringW column);

  /// @brief Method NotAllowDBNullViolationText, addr 0x2411294, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW NotAllowDBNullViolationText(::StringW columnName);

  /// @brief Method NotOpen, addr 0x241735c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NotOpen();

  /// @brief Method NullDataType, addr 0x240d484, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NullDataType();

  /// @brief Method NullKeyValues, addr 0x240ff80, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* NullKeyValues(::StringW column);

  /// @brief Method NullRange, addr 0x24191f4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* NullRange();

  /// @brief Method NullValues, addr 0x240ffcc, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* NullValues(::StringW column);

  /// @brief Method ParentOrChildColumnsDoNotHaveDataSet, addr 0x2417b00, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ParentOrChildColumnsDoNotHaveDataSet();

  /// @brief Method ParentTableMismatch, addr 0x2418874, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ParentTableMismatch();

  /// @brief Method PolymorphismNotSupported, addr 0x2419c5c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* PolymorphismNotSupported(::StringW typeName);

  /// @brief Method ProblematicChars, addr 0x2419274, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Exception* ProblematicChars(char16_t charValue);

  /// @brief Method RangeArgument, addr 0x2419144, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Exception* RangeArgument(int32_t min, int32_t max);

  /// @brief Method ReadOnly, addr 0x2416f20, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* ReadOnly(::StringW column);

  /// @brief Method ReadOnlyAndExpression, addr 0x240f038, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ReadOnlyAndExpression();

  /// @brief Method RecordStateRange, addr 0x2418480, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RecordStateRange();

  /// @brief Method RelationAlreadyExists, addr 0x24183c0, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationAlreadyExists();

  /// @brief Method RelationAlreadyInOtherDataSet, addr 0x2418618, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationAlreadyInOtherDataSet();

  /// @brief Method RelationAlreadyInTheDataSet, addr 0x2418658, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationAlreadyInTheDataSet();

  /// @brief Method RelationChildKeyMissing, addr 0x241966c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationChildKeyMissing(::StringW rel);

  /// @brief Method RelationChildNameMissing, addr 0x24195d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationChildNameMissing(::StringW rel);

  /// @brief Method RelationDataSetMismatch, addr 0x2417754, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationDataSetMismatch();

  /// @brief Method RelationDataSetNull, addr 0x24187f4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationDataSetNull();

  /// @brief Method RelationDoesNotExist, addr 0x2417ac0, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationDoesNotExist();

  /// @brief Method RelationForeignRow, addr 0x24179a8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationForeignRow();

  /// @brief Method RelationForeignTable, addr 0x2417894, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationForeignTable(::StringW t1, ::StringW t2);

  /// @brief Method RelationNestedReadOnly, addr 0x24179e8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationNestedReadOnly();

  /// @brief Method RelationNotInTheDataSet, addr 0x2418698, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationNotInTheDataSet(::StringW relation);

  /// @brief Method RelationOutOfRange, addr 0x24186e4, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationOutOfRange(::System::Object* index);

  /// @brief Method RelationParentNameMissing, addr 0x2419588, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationParentNameMissing(::StringW rel);

  /// @brief Method RelationTableKeyMissing, addr 0x2419620, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationTableKeyMissing(::StringW rel);

  /// @brief Method RelationTableNull, addr 0x24187b4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationTableNull();

  /// @brief Method RelationTableWasRemoved, addr 0x2418834, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RelationTableWasRemoved();

  /// @brief Method RemoveExternalObject, addr 0x241756c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RemoveExternalObject();

  /// @brief Method RemoveParentRow, addr 0x2416e64, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* RemoveParentRow(::System::Data::ForeignKeyConstraint* constraint);

  /// @brief Method RemovePrimaryKey, addr 0x241859c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* RemovePrimaryKey(::System::Data::DataTable* table);

  /// @brief Method RowAlreadyDeleted, addr 0x2417f18, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RowAlreadyDeleted();

  /// @brief Method RowAlreadyInOtherCollection, addr 0x2418400, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RowAlreadyInOtherCollection();

  /// @brief Method RowAlreadyInTheCollection, addr 0x2418440, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RowAlreadyInTheCollection();

  /// @brief Method RowAlreadyRemoved, addr 0x2418154, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RowAlreadyRemoved();

  /// @brief Method RowEmpty, addr 0x2417f58, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RowEmpty();

  /// @brief Method RowInsertMissing, addr 0x2418108, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* RowInsertMissing(::StringW tableName);

  /// @brief Method RowInsertTwice, addr 0x2418068, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* RowInsertTwice(int32_t index, ::StringW tableName);

  /// @brief Method RowNotInTheDataSet, addr 0x2417bd8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RowNotInTheDataSet();

  /// @brief Method RowNotInTheTable, addr 0x2417c18, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RowNotInTheTable();

  /// @brief Method RowOutOfRange, addr 0x2417fd8, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Exception* RowOutOfRange(int32_t index);

  /// @brief Method RowRemovedFromTheTable, addr 0x2417e98, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* RowRemovedFromTheTable();

  /// @brief Method SelfnestedDatasetConflictingName, addr 0x2418c00, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* SelfnestedDatasetConflictingName(::StringW table);

  /// @brief Method SetDataSetNameConflicting, addr 0x241829c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* SetDataSetNameConflicting(::StringW name);

  /// @brief Method SetDataSetNameToEmpty, addr 0x241825c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* SetDataSetNameToEmpty();

  /// @brief Method SetFailed, addr 0x2417110, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* SetFailed(::StringW name);

  /// @brief Method SetFailed, addr 0x240f398, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* SetFailed(::System::Object* value, ::System::Data::DataColumn* column, ::System::Type* type, ::System::Exception* innerException);

  /// @brief Method SetIListObject, addr 0x24172dc, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* SetIListObject();

  /// @brief Method SetParentRowTableMismatch, addr 0x241794c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* SetParentRowTableMismatch(::StringW t1, ::StringW t2);

  /// @brief Method SetRowStateFilter, addr 0x241715c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* SetRowStateFilter();

  /// @brief Method SetTable, addr 0x241729c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* SetTable();

  /// @brief Method SimpleTypeNotSupported, addr 0x2419390, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* SimpleTypeNotSupported();

  /// @brief Method StorageSetFailed, addr 0x2419350, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* StorageSetFailed();

  /// @brief Method TableAlreadyInOtherDataSet, addr 0x2418c98, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* TableAlreadyInOtherDataSet();

  /// @brief Method TableAlreadyInTheDataSet, addr 0x2418cd8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* TableAlreadyInTheDataSet();

  /// @brief Method TableCannotAddToSimpleContent, addr 0x2418a4c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* TableCannotAddToSimpleContent();

  /// @brief Method TableCantBeNestedInTwoTables, addr 0x2417a28, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* TableCantBeNestedInTwoTables(::StringW tableName);

  /// @brief Method TableForeignPrimaryKey, addr 0x2418a0c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* TableForeignPrimaryKey();

  /// @brief Method TableInConstraint, addr 0x2418e34, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* TableInConstraint(::System::Data::DataTable* table, ::System::Data::Constraint* constraint);

  /// @brief Method TableInRelation, addr 0x2418df4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* TableInRelation();

  /// @brief Method TableNotFound, addr 0x2418fac, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* TableNotFound(::StringW tableName);

  /// @brief Method TableNotInTheDataSet, addr 0x2418da8, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* TableNotInTheDataSet(::StringW table);

  /// @brief Method TableOutOfRange, addr 0x2418d18, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Exception* TableOutOfRange(int32_t index);

  /// @brief Method TablesInDifferentSets, addr 0x2418380, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* TablesInDifferentSets();

  /// @brief Method ThrowDataException, addr 0x2416270, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowDataException(::StringW error, ::System::Exception* innerException);

  /// @brief Method ThrowMultipleTargetConverter, addr 0x2419ce8, size 0x60, virtual false, abstract: false, final false
  static inline void ThrowMultipleTargetConverter(::System::Exception* innerException);

  /// @brief Method TooManyIsDataSetAtributeInSchema, addr 0x2419b84, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* TooManyIsDataSetAtributeInSchema();

  /// @brief Method TraceException, addr 0x2415e38, size 0x98, virtual false, abstract: false, final false
  static inline void TraceException(::StringW trace, ::System::Exception* e);

  /// @brief Method TraceExceptionAsReturnValue, addr 0x2415ed0, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* TraceExceptionAsReturnValue(::System::Exception* e);

  /// @brief Method TraceExceptionForCapture, addr 0x240e11c, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* TraceExceptionForCapture(::System::Exception* e);

  /// @brief Method TraceExceptionWithoutRethrow, addr 0x240e360, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Exception* TraceExceptionWithoutRethrow(::System::Exception* e);

  /// @brief Method UDTImplementsIChangeTrackingButnotIRevertible, addr 0x2417058, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* UDTImplementsIChangeTrackingButnotIRevertible(::StringW typeName);

  /// @brief Method UndefinedDatatype, addr 0x24196b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* UndefinedDatatype(::StringW name);

  /// @brief Method UniqueAndExpression, addr 0x240fa0c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* UniqueAndExpression();

  /// @brief Method UniqueConstraintViolation, addr 0x2407d90, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* UniqueConstraintViolation();

  /// @brief Method UniqueConstraintViolationText, addr 0x2416aa8, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW UniqueConstraintViolationText(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns,
                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method ValueArrayLength, addr 0x2417d98, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Exception* ValueArrayLength();

  /// @brief Method _Argument, addr 0x2415f20, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* _Argument(::StringW error);

  /// @brief Method _Argument, addr 0x2415fe8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* _Argument(::StringW error, ::System::Exception* innerException);

  /// @brief Method _Argument, addr 0x2415f84, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* _Argument(::StringW paramName, ::StringW error);

  /// @brief Method _ArgumentNull, addr 0x241605c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* _ArgumentNull(::StringW paramName, ::StringW msg);

  /// @brief Method _ArgumentOutOfRange, addr 0x24160d0, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* _ArgumentOutOfRange(::StringW paramName, ::StringW msg);

  /// @brief Method _Constraint, addr 0x2416338, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _Constraint(::StringW error);

  /// @brief Method _Data, addr 0x24162c8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _Data(::StringW error);

  /// @brief Method _DeletedRowInaccessible, addr 0x2416418, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _DeletedRowInaccessible(::StringW error);

  /// @brief Method _DuplicateName, addr 0x2416488, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _DuplicateName(::StringW error);

  /// @brief Method _InRowChangingEvent, addr 0x24164f8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _InRowChangingEvent(::StringW error);

  /// @brief Method _IndexOutOfRange, addr 0x2416144, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* _IndexOutOfRange(::StringW error);

  /// @brief Method _InvalidConstraint, addr 0x24163a8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _InvalidConstraint(::StringW error);

  /// @brief Method _InvalidEnumArgumentException, addr 0x241620c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* _InvalidEnumArgumentException(::StringW error);

  /// @brief Method _InvalidEnumArgumentException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Exception* _InvalidEnumArgumentException(T value);

  /// @brief Method _InvalidOperation, addr 0x24161a8, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* _InvalidOperation(::StringW error);

  /// @brief Method _NoNullAllowed, addr 0x2416568, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _NoNullAllowed(::StringW error);

  /// @brief Method _ReadOnly, addr 0x24165d8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _ReadOnly(::StringW error);

  /// @brief Method _RowNotInTable, addr 0x2416648, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _RowNotInTable(::StringW error);

  /// @brief Method _VersionNotFound, addr 0x24166b8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* _VersionNotFound(::StringW error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionBuilder(ExceptionBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionBuilder(ExceptionBuilder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ExceptionBuilder, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ExceptionBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExceptionBuilder*, "System.Data", "ExceptionBuilder");
