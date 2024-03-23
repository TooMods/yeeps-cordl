#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ImageConfig)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ImageConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ImageConfig);
// Type: Amazon.Lambda.Model::ImageConfig
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ImageConfig*
class CORDL_TYPE ImageConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Command, put = set_Command))::System::Collections::Generic::List_1<::StringW>* Command;

  __declspec(property(get = get_EntryPoint, put = set_EntryPoint))::System::Collections::Generic::List_1<::StringW>* EntryPoint;

  __declspec(property(get = get_IsCommandSet, put = set_IsCommandSet)) bool IsCommandSet;

  __declspec(property(get = get_IsEntryPointSet, put = set_IsEntryPointSet)) bool IsEntryPointSet;

  __declspec(property(get = get_WorkingDirectory, put = set_WorkingDirectory))::StringW WorkingDirectory;

  /// @brief Field _command, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__command, put = __cordl_internal_set__command))::System::Collections::Generic::List_1<::StringW>* _command;

  /// @brief Field _entryPoint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entryPoint, put = __cordl_internal_set__entryPoint))::System::Collections::Generic::List_1<::StringW>* _entryPoint;

  /// @brief Field _workingDirectory, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__workingDirectory, put = __cordl_internal_set__workingDirectory))::StringW _workingDirectory;

  /// @brief Method IsSetCommand, addr 0x2bcc4c4, size 0x4, virtual false, abstract: false, final false
  inline bool IsSetCommand();

  /// @brief Method IsSetEntryPoint, addr 0x2bcc5c8, size 0x4, virtual false, abstract: false, final false
  inline bool IsSetEntryPoint();

  /// @brief Method IsSetWorkingDirectory, addr 0x2bcc5dc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetWorkingDirectory();

  static inline ::Amazon::Lambda::Model::ImageConfig* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__command();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__command() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__entryPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__entryPoint() const;

  constexpr ::StringW const& __cordl_internal_get__workingDirectory() const;

  constexpr ::StringW& __cordl_internal_get__workingDirectory();

  constexpr void __cordl_internal_set__command(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__entryPoint(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__workingDirectory(::StringW value);

  /// @brief Method .ctor, addr 0x2bcc5ec, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Command, addr 0x2bcc3c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Command();

  /// @brief Method get_EntryPoint, addr 0x2bcc4c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_EntryPoint();

  /// @brief Method get_IsCommandSet, addr 0x2bcc3d4, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsCommandSet();

  /// @brief Method get_IsEntryPointSet, addr 0x2bcc4d8, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsEntryPointSet();

  /// @brief Method get_WorkingDirectory, addr 0x2bcc5cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_WorkingDirectory();

  /// @brief Method set_Command, addr 0x2bcc3cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Command(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_EntryPoint, addr 0x2bcc4d0, size 0x8, virtual false, abstract: false, final false
  inline void set_EntryPoint(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_IsCommandSet, addr 0x2bcc444, size 0x80, virtual false, abstract: false, final false
  inline void set_IsCommandSet(bool value);

  /// @brief Method set_IsEntryPointSet, addr 0x2bcc548, size 0x80, virtual false, abstract: false, final false
  inline void set_IsEntryPointSet(bool value);

  /// @brief Method set_WorkingDirectory, addr 0x2bcc5d4, size 0x8, virtual false, abstract: false, final false
  inline void set_WorkingDirectory(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageConfig(ImageConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageConfig(ImageConfig const&) = delete;

  /// @brief Field _command, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____command;

  /// @brief Field _entryPoint, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____entryPoint;

  /// @brief Field _workingDirectory, offset: 0x20, size: 0x8, def value: None
  ::StringW ____workingDirectory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ImageConfig, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ImageConfig, ____command) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ImageConfig, ____entryPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ImageConfig, ____workingDirectory) == 0x20, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ImageConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ImageConfig*, "Amazon.Lambda.Model", "ImageConfig");
