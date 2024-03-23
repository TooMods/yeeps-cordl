#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OptimisticLockedTextFile)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class OptimisticLockedTextFile;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile);
// Type: Amazon.Runtime.Internal.Util::OptimisticLockedTextFile
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::OptimisticLockedTextFile*
class CORDL_TYPE OptimisticLockedTextFile : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FilePath, put = set_FilePath))::StringW FilePath;

  __declspec(property(get = get_Lines, put = set_Lines))::System::Collections::Generic::List_1<::StringW>* Lines;

  __declspec(property(get = get_OriginalContents, put = set_OriginalContents))::StringW OriginalContents;

  /// @brief Field <FilePath>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__FilePath_k__BackingField, put = __cordl_internal_set__FilePath_k__BackingField))::StringW _FilePath_k__BackingField;

  /// @brief Field <Lines>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Lines_k__BackingField, put = __cordl_internal_set__Lines_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _Lines_k__BackingField;

  /// @brief Field <OriginalContents>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__OriginalContents_k__BackingField, put = __cordl_internal_set__OriginalContents_k__BackingField))::StringW _OriginalContents_k__BackingField;

  /// @brief Method HasEnding, addr 0x2444250, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasEnding(::StringW line);

  static inline ::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile* New_ctor(::StringW filePath);

  /// @brief Method Persist, addr 0x243a364, size 0x5f8, virtual false, abstract: false, final false
  inline void Persist();

  /// @brief Method Read, addr 0x2444044, size 0x100, virtual false, abstract: false, final false
  inline void Read();

  /// @brief Method ReadLinesWithEndings, addr 0x244428c, size 0x280, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* ReadLinesWithEndings(::StringW str);

  /// @brief Method ToString, addr 0x2444144, size 0x10c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__FilePath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FilePath_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__Lines_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__Lines_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__OriginalContents_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__OriginalContents_k__BackingField();

  constexpr void __cordl_internal_set__FilePath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Lines_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__OriginalContents_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x243a1bc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

  /// @brief Method get_FilePath, addr 0x2444024, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FilePath();

  /// @brief Method get_Lines, addr 0x2444034, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Lines();

  /// @brief Method get_OriginalContents, addr 0x2444014, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_OriginalContents();

  /// @brief Method set_FilePath, addr 0x244402c, size 0x8, virtual false, abstract: false, final false
  inline void set_FilePath(::StringW value);

  /// @brief Method set_Lines, addr 0x244403c, size 0x8, virtual false, abstract: false, final false
  inline void set_Lines(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_OriginalContents, addr 0x244401c, size 0x8, virtual false, abstract: false, final false
  inline void set_OriginalContents(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptimisticLockedTextFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OptimisticLockedTextFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptimisticLockedTextFile(OptimisticLockedTextFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptimisticLockedTextFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptimisticLockedTextFile(OptimisticLockedTextFile const&) = delete;

  /// @brief Field <OriginalContents>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____OriginalContents_k__BackingField;

  /// @brief Field <FilePath>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____FilePath_k__BackingField;

  /// @brief Field <Lines>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____Lines_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile, ____OriginalContents_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile, ____FilePath_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile, ____Lines_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile*, "Amazon.Runtime.Internal.Util", "OptimisticLockedTextFile");
