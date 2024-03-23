#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AWSStreamContent)
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class StreamContent;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Util {
class AWSStreamContent;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::AWSStreamContent);
// Type: Amazon.Util::AWSStreamContent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::AWSStreamContent*
class CORDL_TYPE AWSStreamContent : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_StreamContent, put = set_StreamContent))::System::Net::Http::StreamContent* StreamContent;

  /// @brief Field <StreamContent>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__StreamContent_k__BackingField,
                      put = __cordl_internal_set__StreamContent_k__BackingField))::System::Net::Http::StreamContent* _StreamContent_k__BackingField;

  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddHttpContentHeader, addr 0x2210dd4, size 0x40, virtual false, abstract: false, final false
  inline void AddHttpContentHeader(::StringW name, ::StringW value);

  /// @brief Method Dispose, addr 0x2210e14, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2210e80, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Util::AWSStreamContent* New_ctor(::System::IO::Stream* content);

  static inline ::Amazon::Util::AWSStreamContent* New_ctor(::System::IO::Stream* content, int32_t bufferSize);

  /// @brief Method RemoveHttpContentHeader, addr 0x2210da4, size 0x30, virtual false, abstract: false, final false
  inline bool RemoveHttpContentHeader(::StringW name);

  constexpr ::System::Net::Http::StreamContent*& __cordl_internal_get__StreamContent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::StreamContent*> const& __cordl_internal_get__StreamContent_k__BackingField() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr void __cordl_internal_set__StreamContent_k__BackingField(::System::Net::Http::StreamContent* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  /// @brief Method .ctor, addr 0x2210ca4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* content);

  /// @brief Method .ctor, addr 0x2210d20, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* content, int32_t bufferSize);

  /// @brief Method get_StreamContent, addr 0x2210c94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::StreamContent* get_StreamContent();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_StreamContent, addr 0x2210c9c, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamContent(::System::Net::Http::StreamContent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSStreamContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSStreamContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSStreamContent(AWSStreamContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSStreamContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSStreamContent(AWSStreamContent const&) = delete;

  /// @brief Field disposed, offset: 0x10, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field <StreamContent>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::StreamContent* ____StreamContent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::AWSStreamContent, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::AWSStreamContent, ___disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::AWSStreamContent, ____StreamContent_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::AWSStreamContent);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::AWSStreamContent*, "Amazon.Util", "AWSStreamContent");
