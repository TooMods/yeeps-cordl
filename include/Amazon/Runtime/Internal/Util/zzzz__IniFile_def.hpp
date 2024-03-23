#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IniFile)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime::Internal::Util {
class OptimisticLockedTextFile;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedDictionary_2;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class IniFile;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::IniFile);
// Type: Amazon.Runtime.Internal.Util::IniFile
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::IniFile*
class CORDL_TYPE IniFile : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FilePath))::StringW FilePath;

  __declspec(property(get = get_Lines))::System::Collections::Generic::List_1<::StringW>* Lines;

  /// @brief Field logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger))::Amazon::Runtime::Internal::Util::Logger* logger;

  /// @brief Field textFile, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textFile, put = __cordl_internal_set_textFile))::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile* textFile;

  /// @brief Method CopySection, addr 0x243aea0, size 0x8, virtual false, abstract: false, final false
  inline void CopySection(::StringW fromSectionName, ::StringW toSectionName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* replaceProperties);

  /// @brief Method CopySection, addr 0x243aea8, size 0x414, virtual false, abstract: false, final false
  inline void CopySection(::StringW fromSectionName, ::StringW toSectionName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* replaceProperties, bool force);

  /// @brief Method DeleteSection, addr 0x243abd0, size 0x10c, virtual false, abstract: false, final false
  inline void DeleteSection(::StringW sectionName);

  /// @brief Method EditSection, addr 0x243b4f4, size 0x590, virtual false, abstract: false, final false
  inline void EditSection(::StringW sectionName, ::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* properties);

  /// @brief Method EnsureSectionExists, addr 0x243ba84, size 0x10c, virtual false, abstract: false, final false
  inline void EnsureSectionExists(::StringW sectionName);

  /// @brief Method GetErrorMessage, addr 0x243c73c, size 0x100, virtual false, abstract: false, final false
  inline ::StringW GetErrorMessage(int32_t lineNumber);

  /// @brief Method GetLineMessage, addr 0x243acdc, size 0x1c4, virtual false, abstract: false, final false
  inline ::StringW GetLineMessage(int32_t lineNumber);

  /// @brief Method GetPropertyLine, addr 0x243b498, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetPropertyLine(::StringW propertyName, ::StringW propertyValue);

  /// @brief Method IsCommentOrBlank, addr 0x243c688, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsCommentOrBlank(::StringW line);

  /// @brief Method IsDuplicateProperty, addr 0x243c0b0, size 0x16c, virtual false, abstract: false, final false
  inline bool IsDuplicateProperty(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* properties, ::StringW propertyName, ::StringW sectionName, int32_t lineNumber);

  /// @brief Method IsProperty, addr 0x243c660, size 0x28, virtual false, abstract: false, final false
  static inline bool IsProperty(::StringW line);

  /// @brief Method IsSection, addr 0x243bd00, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsSection(::StringW line);

  /// @brief Method ListSectionNames, addr 0x243bd1c, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* ListSectionNames();

  static inline ::Amazon::Runtime::Internal::Util::IniFile* New_ctor(::StringW filePath);

  /// @brief Method Persist, addr 0x243a344, size 0x20, virtual false, abstract: false, final false
  inline void Persist();

  /// @brief Method RenameSection, addr 0x243a95c, size 0x8, virtual false, abstract: false, final false
  inline void RenameSection(::StringW oldSectionName, ::StringW newSectionName);

  /// @brief Method RenameSection, addr 0x243a964, size 0x1f0, virtual false, abstract: false, final false
  inline void RenameSection(::StringW oldSectionName, ::StringW newSectionName, bool force);

  /// @brief Method SectionExists, addr 0x243beb8, size 0x1c, virtual false, abstract: false, final false
  inline bool SectionExists(::StringW sectionName);

  /// @brief Method SeekProperty, addr 0x243bb90, size 0x170, virtual false, abstract: false, final false
  inline bool SeekProperty(ByRef<int32_t> lineNumber, ByRef<::StringW> propertyName, ByRef<::StringW> propertyValue);

  /// @brief Method SeekSection, addr 0x243be00, size 0xb8, virtual false, abstract: false, final false
  inline bool SeekSection(ByRef<int32_t> lineNumber, ByRef<::StringW> sectionName);

  /// @brief Method ToString, addr 0x243c4c4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetSection, addr 0x243bed4, size 0x1dc, virtual true, abstract: false, final false
  inline bool TryGetSection(::StringW sectionName, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties);

  /// @brief Method TryGetSection, addr 0x243c21c, size 0x20, virtual false, abstract: false, final false
  inline bool TryGetSection(::System::Text::RegularExpressions::Regex* sectionNameRegex, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties);

  /// @brief Method TryGetSection, addr 0x243c23c, size 0x1e4, virtual false, abstract: false, final false
  inline bool TryGetSection(::System::Text::RegularExpressions::Regex* sectionNameRegex, ByRef<::StringW> sectionName,
                            ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties);

  /// @brief Method TryParseProperty, addr 0x243b398, size 0x100, virtual false, abstract: false, final false
  static inline bool TryParseProperty(::StringW line, ByRef<::StringW> propertyName, ByRef<::StringW> propertyValue);

  /// @brief Method TryParseSection, addr 0x243b2bc, size 0xdc, virtual false, abstract: false, final false
  static inline bool TryParseSection(::StringW line, ByRef<::StringW> sectionName);

  /// @brief Method TrySeekSection, addr 0x243ab54, size 0x7c, virtual false, abstract: false, final false
  inline bool TrySeekSection(::StringW sectionName, ByRef<int32_t> lineNumber);

  /// @brief Method TrySeekSection, addr 0x243c420, size 0xa4, virtual false, abstract: false, final false
  inline bool TrySeekSection(::System::Text::RegularExpressions::Regex* sectionNameRegex, ByRef<int32_t> lineNumber, ByRef<::StringW> sectionName);

  /// @brief Method Validate, addr 0x243a1e8, size 0x124, virtual false, abstract: false, final false
  inline void Validate();

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get_logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get_logger() const;

  constexpr ::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile*& __cordl_internal_get_textFile();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile*> const& __cordl_internal_get_textFile() const;

  constexpr void __cordl_internal_set_logger(::Amazon::Runtime::Internal::Util::Logger* value);

  constexpr void __cordl_internal_set_textFile(::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile* value);

  /// @brief Method .ctor, addr 0x243a0f0, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

  /// @brief Method get_FilePath, addr 0x243a30c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_FilePath();

  /// @brief Method get_Lines, addr 0x243a328, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Lines();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IniFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IniFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IniFile(IniFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IniFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IniFile(IniFile const&) = delete;

  /// @brief Field textFile, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::OptimisticLockedTextFile* ___textFile;

  /// @brief Field logger, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ___logger;

  /// @brief Field hashComment offset 0xffffffff size 0x8
  static constexpr ::ConstString hashComment{ u"#" };

  /// @brief Field keyValueSeparator offset 0xffffffff size 0x8
  static constexpr ::ConstString keyValueSeparator{ u"=" };

  /// @brief Field sectionNamePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString sectionNamePrefix{ u"[" };

  /// @brief Field sectionNameSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString sectionNameSuffix{ u"]" };

  /// @brief Field semiColonComment offset 0xffffffff size 0x8
  static constexpr ::ConstString semiColonComment{ u";" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::IniFile, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::IniFile, ___textFile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::IniFile, ___logger) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::IniFile);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::IniFile*, "Amazon.Runtime.Internal.Util", "IniFile");
