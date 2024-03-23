#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmarshallerContext)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Util {
class CachingWrapperStream;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
namespace ThirdParty::Ionic::Zlib {
class CrcCalculatorStream;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class UnmarshallerContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::UnmarshallerContext);
// Type: Amazon.Runtime.Internal.Transform::UnmarshallerContext
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::UnmarshallerContext*
class CORDL_TYPE UnmarshallerContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Crc32Result, put = set_Crc32Result)) int32_t Crc32Result;

  __declspec(property(get = get_CrcStream, put = set_CrcStream))::ThirdParty::Ionic::Zlib::CrcCalculatorStream* CrcStream;

  __declspec(property(get = get_CurrentDepth)) int32_t CurrentDepth;

  __declspec(property(get = get_CurrentPath))::StringW CurrentPath;

  __declspec(property(get = get_IsEndElement)) bool IsEndElement;

  __declspec(property(get = get_IsException, put = set_IsException)) bool IsException;

  __declspec(property(get = get_IsStartElement)) bool IsStartElement;

  __declspec(property(get = get_IsStartOfDocument)) bool IsStartOfDocument;

  __declspec(property(get = get_MaintainResponseBody, put = set_MaintainResponseBody)) bool MaintainResponseBody;

  __declspec(property(get = get_ResponseBody))::StringW ResponseBody;

  __declspec(property(get = get_ResponseData))::Amazon::Runtime::Internal::Transform::IWebResponseData* ResponseData;

  __declspec(property(get = get_WebResponseData, put = set_WebResponseData))::Amazon::Runtime::Internal::Transform::IWebResponseData* WebResponseData;

  __declspec(property(get = get_WrappingStream, put = set_WrappingStream))::Amazon::Runtime::Internal::Util::CachingWrapperStream* WrappingStream;

  /// @brief Field <Crc32Result>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__Crc32Result_k__BackingField, put = __cordl_internal_set__Crc32Result_k__BackingField)) int32_t _Crc32Result_k__BackingField;

  /// @brief Field <CrcStream>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__CrcStream_k__BackingField,
                      put = __cordl_internal_set__CrcStream_k__BackingField))::ThirdParty::Ionic::Zlib::CrcCalculatorStream* _CrcStream_k__BackingField;

  /// @brief Field <IsException>k__BackingField, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__IsException_k__BackingField, put = __cordl_internal_set__IsException_k__BackingField)) bool _IsException_k__BackingField;

  /// @brief Field <MaintainResponseBody>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__MaintainResponseBody_k__BackingField, put = __cordl_internal_set__MaintainResponseBody_k__BackingField)) bool _MaintainResponseBody_k__BackingField;

  /// @brief Field <WebResponseData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__WebResponseData_k__BackingField,
                      put = __cordl_internal_set__WebResponseData_k__BackingField))::Amazon::Runtime::Internal::Transform::IWebResponseData* _WebResponseData_k__BackingField;

  /// @brief Field <WrappingStream>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__WrappingStream_k__BackingField,
                      put = __cordl_internal_set__WrappingStream_k__BackingField))::Amazon::Runtime::Internal::Util::CachingWrapperStream* _WrappingStream_k__BackingField;

  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x244e684, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x244b2c4, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetResponseBodyBytes, addr 0x2449dd4, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetResponseBodyBytes();

  static inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Read();

  /// @brief Method ReadAtDepth, addr 0x244e634, size 0x50, virtual false, abstract: false, final false
  inline bool ReadAtDepth(int32_t targetDepth);

  /// @brief Method ReadText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ReadText();

  /// @brief Method SetupCRCStream, addr 0x244a804, size 0x134, virtual false, abstract: false, final false
  inline void SetupCRCStream(::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, ::System::IO::Stream* responseStream, int64_t contentLength);

  /// @brief Method TestExpression, addr 0x24492e0, size 0x28, virtual false, abstract: false, final false
  inline bool TestExpression(::StringW expression);

  /// @brief Method TestExpression, addr 0x244e400, size 0x84, virtual false, abstract: false, final false
  static inline bool TestExpression(::StringW expression, ::StringW currentPath);

  /// @brief Method TestExpression, addr 0x244e484, size 0x5c, virtual false, abstract: false, final false
  inline bool TestExpression(::StringW expression, int32_t startingStackDepth);

  /// @brief Method TestExpression, addr 0x244e4e0, size 0x154, virtual false, abstract: false, final false
  static inline bool TestExpression(::StringW expression, int32_t startingStackDepth, ::StringW currentPath, int32_t currentDepth);

  /// @brief Method ValidateCRC32IfAvailable, addr 0x244e388, size 0x78, virtual false, abstract: false, final false
  inline void ValidateCRC32IfAvailable();

  constexpr int32_t const& __cordl_internal_get__Crc32Result_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Crc32Result_k__BackingField();

  constexpr ::ThirdParty::Ionic::Zlib::CrcCalculatorStream*& __cordl_internal_get__CrcStream_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*> const& __cordl_internal_get__CrcStream_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsException_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsException_k__BackingField();

  constexpr bool const& __cordl_internal_get__MaintainResponseBody_k__BackingField() const;

  constexpr bool& __cordl_internal_get__MaintainResponseBody_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::Transform::IWebResponseData*& __cordl_internal_get__WebResponseData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::IWebResponseData*> const& __cordl_internal_get__WebResponseData_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Util::CachingWrapperStream*& __cordl_internal_get__WrappingStream_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::CachingWrapperStream*> const& __cordl_internal_get__WrappingStream_k__BackingField() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr void __cordl_internal_set__Crc32Result_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__CrcStream_k__BackingField(::ThirdParty::Ionic::Zlib::CrcCalculatorStream* value);

  constexpr void __cordl_internal_set__IsException_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MaintainResponseBody_k__BackingField(bool value);

  constexpr void __cordl_internal_set__WebResponseData_k__BackingField(::Amazon::Runtime::Internal::Transform::IWebResponseData* value);

  constexpr void __cordl_internal_set__WrappingStream_k__BackingField(::Amazon::Runtime::Internal::Util::CachingWrapperStream* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  /// @brief Method .ctor, addr 0x244a7fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Crc32Result, addr 0x244e358, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Crc32Result();

  /// @brief Method get_CrcStream, addr 0x244e348, size 0x8, virtual false, abstract: false, final false
  inline ::ThirdParty::Ionic::Zlib::CrcCalculatorStream* get_CrcStream();

  /// @brief Method get_CurrentDepth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_CurrentDepth();

  /// @brief Method get_CurrentPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_CurrentPath();

  /// @brief Method get_IsEndElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEndElement();

  /// @brief Method get_IsException, addr 0x244e334, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsException();

  /// @brief Method get_IsStartElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsStartElement();

  /// @brief Method get_IsStartOfDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsStartOfDocument();

  /// @brief Method get_MaintainResponseBody, addr 0x244e320, size 0x8, virtual false, abstract: false, final false
  inline bool get_MaintainResponseBody();

  /// @brief Method get_ResponseBody, addr 0x24492a0, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_ResponseBody();

  /// @brief Method get_ResponseData, addr 0x244a24c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* get_ResponseData();

  /// @brief Method get_WebResponseData, addr 0x244e368, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* get_WebResponseData();

  /// @brief Method get_WrappingStream, addr 0x244e378, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::CachingWrapperStream* get_WrappingStream();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Crc32Result, addr 0x244e360, size 0x8, virtual false, abstract: false, final false
  inline void set_Crc32Result(int32_t value);

  /// @brief Method set_CrcStream, addr 0x244e350, size 0x8, virtual false, abstract: false, final false
  inline void set_CrcStream(::ThirdParty::Ionic::Zlib::CrcCalculatorStream* value);

  /// @brief Method set_IsException, addr 0x244e33c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsException(bool value);

  /// @brief Method set_MaintainResponseBody, addr 0x244e328, size 0xc, virtual false, abstract: false, final false
  inline void set_MaintainResponseBody(bool value);

  /// @brief Method set_WebResponseData, addr 0x244e370, size 0x8, virtual false, abstract: false, final false
  inline void set_WebResponseData(::Amazon::Runtime::Internal::Transform::IWebResponseData* value);

  /// @brief Method set_WrappingStream, addr 0x244e380, size 0x8, virtual false, abstract: false, final false
  inline void set_WrappingStream(::Amazon::Runtime::Internal::Util::CachingWrapperStream* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmarshallerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnmarshallerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmarshallerContext(UnmarshallerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmarshallerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmarshallerContext(UnmarshallerContext const&) = delete;

  /// @brief Field disposed, offset: 0x10, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field <MaintainResponseBody>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____MaintainResponseBody_k__BackingField;

  /// @brief Field <IsException>k__BackingField, offset: 0x12, size: 0x1, def value: None
  bool ____IsException_k__BackingField;

  /// @brief Field <CrcStream>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ThirdParty::Ionic::Zlib::CrcCalculatorStream* ____CrcStream_k__BackingField;

  /// @brief Field <Crc32Result>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____Crc32Result_k__BackingField;

  /// @brief Field <WebResponseData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IWebResponseData* ____WebResponseData_k__BackingField;

  /// @brief Field <WrappingStream>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::CachingWrapperStream* ____WrappingStream_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::UnmarshallerContext, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::UnmarshallerContext, ___disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::UnmarshallerContext, ____MaintainResponseBody_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::UnmarshallerContext, ____IsException_k__BackingField) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::UnmarshallerContext, ____CrcStream_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::UnmarshallerContext, ____Crc32Result_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::UnmarshallerContext, ____WebResponseData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::UnmarshallerContext, ____WrappingStream_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::UnmarshallerContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::UnmarshallerContext*, "Amazon.Runtime.Internal.Transform", "UnmarshallerContext");
