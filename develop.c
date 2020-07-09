unsigned char pushBack(rBuffHandle_t buff, unsigned char c){
    if (!buff->overFlow){
        buff->buffer[buff->tail] = c;
            buff->tail = buff->tail+1;
            buff->tail = buff->tail & ring_mask;
            return 1;
        
    }
    else {
        return 0;
    }
}