%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PrintMemory)
%;**     Description :
%;**         Prints a chunk of memory bytes in a formatted way.
%include Common\GeneralParameters.inc(27)
%;**       * hndl%Parhndl %>27 - Pointer to 
%;**         startAddr%ParstartAddr %>27 - Memory start address
%;**         endAddr%ParendAddr %>27 - Memory end address
%;**         addrSize%ParaddrSize %>27 - Number of bytes for the address
%;** %>29 (1, 2, 3 or 4)
%;**         bytesPerLine%ParbytesPerLine %>27 - Number of bytes per line
%;**         readfp%Parreadfp %>27 - Function pointer to read the memory.
%;** %>29 Returns error code, uses a device handle,
%;** %>29 32bit address with a pointer to a buffer
%;** %>29 and a buffer size.
%;**       * io%Pario %>27 - Pointer to I/O to be used
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine